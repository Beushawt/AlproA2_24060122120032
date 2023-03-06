/*Nama file : jarakPBola.c*/
/*Deskripsi : Menghitung jarak*/
/*Pembuat   : Sarah Teguh Kinanti Situmeang-24060122120032*/
/*Tgl Buat  : 26 Februari 2023*/

#include <stdio.h>
#include <stdlib.h>

int jarakPBola()
{
/* Kamus */
    float v0, t, y;
    const float g = 9.8;

/* Algoritma */
    printf("\ninput kecepatan awal: ");
    scanf("%f", &v0);
    printf("\ninput waktu: ");
    scanf("%f", &t);
    printf("\nJaraknya adalah: ");
    y = v0 * t - (g * (t * t) / 2);
    printf("%f", y);


    return 0;
}
