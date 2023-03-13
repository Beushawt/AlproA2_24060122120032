#include <stdio.h>

int jumDeret()
{

    //Kamus
    int N,i, jumlah = 0;

    //Algoritma
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    for (i=1; i<=N; i++)
    {
        jumlah +=i;
    }
    printf("Jumlah Deret Bilangan adalah: %d", jumlah);

    return 0;
}
