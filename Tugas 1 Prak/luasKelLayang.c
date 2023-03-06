/*Nama file : luasKelLayang.c*/
/*Deskripsi : Menghitung luas dan keliling layang-layang*/
/*Pembuat   : Sarah Teguh Kinanti Situmeang-24060122120032*/
/*Tgl Buat  : 26 Februari 2023*/

#include <stdio.h>
#include <stdlib.h>


int luasKelLayang()
{
/* Kamus */
    float s1, s2, d1, d2, Luas, Keliling;

/* Algoritma */
    printf("\nInput Sisi Satu: ");
    scanf("%f", &s1);
    printf("\nInput Sisi Dua: ");
    scanf("%f", &s2);
    printf("\nInput Diagonal Satu: ");
    scanf("%f", &d1);
    printf("\nInput Diagonal Dua: ");
    scanf("%f", &d2);
    Luas = d1 * d2 / 2;
    Keliling = 2 * (s1 + s2);
    printf("Jadi, Luas layang-layang adalah %f dan Keliling layang-layang adalah %f", Luas, Keliling); //output


    return 0;
}

