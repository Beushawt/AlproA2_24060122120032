/*Nama file : cekBill.c*/
/*Deskripsi : Mengecek Bilangan apakah bilangn bulat positif, negatif atau bilangan nol*/
/*Pembuat   : Sarah Teguh Kinanti Situmeang-24060122120032*/
/*Tgl Buat  : 5 Maret 2023*/

#include <stdio.h>
#include <stdlib.h>

int cekBil()
{
    //Kamus
    int i;

    //Algoritma

    printf(" Masukkan Bilangan: ");
    scanf("%d", &i);
    if ( i != 1){
        printf("Bukan Bilangan Bulat");
    }
    else {
        if (i > 0){
        printf("Bilangan Bulat Positif");

        }else if (i < 0){
        printf("Bilangan Bulat Negatif");

        }else if (i == 0){
        printf ("Bilangan Nol");
        }
        printf("Bukan Bilangan Bulat");
    }

    return 0;
}
