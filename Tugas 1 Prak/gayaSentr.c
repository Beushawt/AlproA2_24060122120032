/*Nama file : gayaSentr.c*/
/*Deskripsi : Menghitung gaya sentripetal*/
/*Pembuat   : Sarah Teguh Kinanti Situmeang-24060122120032*/
/*Tgl Buat  : 26 Februari 2023*/

#include <stdio.h>
#include <stdlib.h>

int gayaSentr()
{
/* Kamus */
    float m, v, r, F;

/* Algoritma */
    printf("\ninput massa: ");
    scanf("%f", &m);
    printf("\ninput kecepatan: ");
    scanf("%f", &v);
    printf("\ninput jari-jari: ");
    scanf("%f", &r);
    printf("\nGaya: ");
    F = m * (v * v / r);
    printf("%f", F);


    return 0;
}
