#include <stdio.h>

int BilSempN()
{
    int i,a, b,N;

    //Kamus
    printf("Masukan N: ");
    scanf("%d", &N);

    if (N>0){
        for (i=1;i<N;i++){
            a=0;
            for (b=1; b <=i; b++){
                if (i % b == 0){
                    a += 1;
                }
            }
            if (a == N){
                printf(" &d", i);
            }
        }
    }
    else{
        printf("N Harus Positif");
    }

    return 0;
}
