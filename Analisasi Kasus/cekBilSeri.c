/*Nama file : cekBilSeri.c*/
/*Deskripsi : Mengecek 3 buah bilangan integer bukan nol, dan menampilkan hasilnya jika dirangkai seri*/
/*Pembuat   : Sarah Teguh Kinanti Situmeang-24060122120032*/
/*Tgl Buat  : 5 Maret 2023*/

#include <stdio.h>
#include <stdlib.h>

int cekBilSeri()
{
    //Kamus
    int a, b, c;

    //Algoritma
    printf("Masukkan tahanan pertama: ");
    scanf("%d", &a);
    printf("Masukkan tahanan kedua: ");
    scanf ("%d", &b);
    printf("Masukkan tahanan ketiga: ");
    scanf ("%d", &c);

        if (a>=0 && b>=0 && c>=0){
            printf("\nDirangkai seri maka akan menjadi %d",a+b+c);
        }
        else{
            printf("Masukan tahanan tidak boleh negatif");
    }

    return 0;

    }

