/*Nama file : volBolaKer.c*/
/*Deskripsi : Menghitung jarak gerak lurus berubah beraturan*/
/*Pembuat   : Sarah Teguh Kinanti Situmeang-24060122120032*/
/*Tgl Buat  : 26 Februari 2023*/

#include <stdio.h>
#include <stdlib.h>

int jarakGLBB()
{
/* Kamus */
    float v0, a, t, S;

/* Algoritma */
    printf("\nMasukkan Besaran v0: ");
    scanf("%f", &v0);
    printf("\nMasukkan Besaran a: ");
    scanf("%f", &a);
    printf("\nMasukkan Besaran t: ");
    scanf("%f", &t);
    printf("\nMaka Besar Jarak adalah: ");
    S = v0 * t + (a * (t * t) / 2);
    printf("%f", S);


    return 0;
}
