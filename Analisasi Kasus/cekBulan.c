/*Nama file : cekBul.c*/
/*Deskripsi : Mengecek nama bulan jika diinputkan sebuah bilangan*/
/*Pembuat   : Sarah Teguh Kinanti Situmeang-24060122120032*/
/*Tgl Buat  : 5 Maret 2023*/

#include <stdio.h>
#include <stdlib.h>

int cekBulan()
{
    //Kamus
    int i;

    //Algoritma
    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &i);

    if (i == 1){
        printf("Januari");
    }else if (i == 2){
        printf("Februari");
    }else if (i == 3){
        printf("Maret");
    }else if (i == 4){
        printf("April");
    }else if (i == 5){
        printf("Mei");
    }else if (i == 6){
        printf("Juni");
    }else if (i == 7){
        printf("Juli");
    }else if (i == 8){
        printf("Agustus");
    }else if (i == 9){
        printf("September");
    }else if (i == 10){
        printf("Oktober");
    }else if (i == 11){
        printf("November");
    }else if (i == 12){
        printf("Desember");
    }else{
        printf("Masukan nomor bulan tidak tepat");
    }

    return 0;

    }

