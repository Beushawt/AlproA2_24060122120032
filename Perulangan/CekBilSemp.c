#include <stdio.h>

int CekBilSemp()
{
    //Kamus
    int N,i, total;

    //Algoritma
    printf("Masukan N: ");
    scanf("%d",&N);

    if(N>0){
        total = 0;
        for(i=1; i<N; i++){
            if (N%i==0){
                total = total + i;
            }
        }
        if (total == N){
            printf("Bilangan Sempurna");
        }
        else{
            printf("Bukan Bilangan Sempurna");
        }

    }else{
        printf("Masukan harus positif");
    }

    return 0;
}
