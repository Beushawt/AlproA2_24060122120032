#include <stdio.h>

int CekBilPrima()
{
    //Kamus
    int N,i, jumlah;

    //Algoritma
    printf("Masukkan bilangan: ");
    scanf("%d", &N);

    if (N<=0){
        printf("Bilangan harus positif");
    }else{
        for (i=1; i<=N; i++){
                if (N%i==0)jumlah++;
                }
        if (jumlah == 2){
                printf("Bilangan Prima", &N);
        }
        else{
                printf("Bukan Bilangan prima", &N);
        }
    }

    return 0;
}
