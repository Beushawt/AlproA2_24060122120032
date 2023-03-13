#include <stdio.h>

int CekBilPrima()
{
    //Kamus
    int N,i, jumlah = 0, faktor;

    //Algoritma
    printf("Masukkan bilangan: ");
    scanf("%d", &N);

    if (N<=0){
        printf("Bilangan harus positif");
    }else{
        for (i=1; i<=N; i++){
            for (jumlah =1; jumlah<=i; jumlah++){
                if (N%i==0){
                    faktor += 1;
                }
            if (faktor == 2){
                printf("%d adalah Bilangan Prima", i);
                    }
            else{
                printf("Bukan Bilangan prima", i);
            }
        }
    }
    }

    return 0;
}
