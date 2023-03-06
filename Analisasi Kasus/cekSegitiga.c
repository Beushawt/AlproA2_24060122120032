/*Nama file : cekBill.c*/
/*Deskripsi : Mengecek sebuah segitiga jika diinputkan berdasarkan sisinya*/
/*Pembuat   : Sarah Teguh Kinanti Situmeang-24060122120032*/
/*Tgl Buat  : 5 Maret 2023*/

#include <stdio.h>
#include <stdlib.h>

int cekSegitiga()
{

    //Kamus
    int a, b, c;

    //Algoritma
    printf("\nMasukkan Sisi Pertama:");
    scanf("%d", &a);
    printf("\nMasukkan Sisi Kedua:");
    scanf("%d", &b);
    printf("\nMasukkan Sisi Ketiga:");
    scanf("%d", &c);

    if (a>0 && b>0 && c>0){
        if (a == b && b == c && c == a){
            printf("\nMerupakan Segitiga Sama Sisi");
        }else if (a !=b && b != c && c!=a){
            printf("\nMerupakan Segitiga Sembarang");
        }else{
            printf("\nMerupakan Segitiga Sama Kaki");
        }
    }else{
        printf("\nTerdapat Nilai Bukan Sisi Segitiga");
    }

    return 0;
}
