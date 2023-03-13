#include <stdio.h>

int BilPrimaN()
{
    //Kamus
    int N,i,a,b;

    printf("Input N: ");
    scanf("%d", &N);

    //Algoritma
    if (N>0){
        for(i=1; i <= N; i++){
            a=0;
            for (b=1; b <= i; b++){
                if (i % b == 0){
                    a += 1;
                }
            }
            if (a == 2){
                printf(" %d ", i);
            }
        }
    }
    else{
        printf("N harus positif");
    }
    return 0;
}
