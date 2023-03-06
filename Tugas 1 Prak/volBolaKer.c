/*Nama file : volBolaKer.c*/
/*Deskripsi : Menghitung volume bola dan volume kerucut*/
/*Pembuat   : Sarah Teguh Kinanti Situmeang-24060122120032*/
/*Tgl Buat  : 26 Februari 2023*/

#include <stdio.h>
#include <stdlib.h>

int volBolaKer()
{
/* Kamus */
    float r, Vb, Vk;
    const float Phi = 3.1415;

/* Algoritma */
    printf("\nInput Jari-Jari: ");
    scanf("%f", &r);
    Vb = 4 * (Phi * r * r * r) / 3;
    Vk = Vb/2;
    printf("Jadi, Volume bola adalah %f dan Volume kerucut adalah %f", Vb, Vk);

    return 0;
}
