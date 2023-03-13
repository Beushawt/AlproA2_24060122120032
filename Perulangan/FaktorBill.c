#include <stdio.h>

int FaktorBill()
{
    //Kamus
    int N,i;

    //Algoritma
    printf("Masukkan Nilai N : ");
    scanf("%d", &N);

    if (N<=0){
        printf("Bilangan harus positif");
    }else{
        for (i=1; i<=N; i++){
            if (N%i==0){
                printf("%d ",i);
            }
        }
    }
    return 0;
}
