#include <stdio.h>
#include <stdlib.h>

int cekHari ()
{
    //Kamus
    int x;

    //Algoritma

    printf("Masukkan sebuah bilangan: ");
    scanf ("%d", &x);
    switch (x){
        case 1 :
            printf("Hari Senin");
            break;
        case 2 :
            printf("Hari Selasa");
            break;
        case 3 :
            printf ("Hari Rabu");
            break;
        case 4 :
            printf ("Hari Kamis");
            break;
        case 5 :
            printf ("Hari Jumat");
            break;
        case 6 :
            printf ("Hari Sabtu");
            break;
        case 7 :
            printf ("Hari Minggu");
            break;
        default :
            printf ("Masukan Nama Hari Tidak Tepat");
            break;
    }

    return 0;

}
