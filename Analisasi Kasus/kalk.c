/*Nama file : cekBill.c*/
/*Deskripsi : Melakukan operasi aritmatika dua bilangan*/
/*Pembuat   : Sarah Teguh Kinanti Situmeang-24060122120032*/
/*Tgl Buat  : 5 Maret 2023*/

#include <stdio.h>
#include <stdlib.h>

int kalk()
{   /*Kamus*/
    int iA, iB;
    int hasil;
    char pilihan;

    /*Algoritma*/
    printf("masukkan pilihan: ");
    scanf("%c", &pilihan);
    printf("masukkan nilai A: ");
    scanf("%d", &iA);
    printf("masukkan nilai B: ");
    scanf("%d", &iB);

    if (pilihan == 'a' || pilihan == 'b' || pilihan == 'c' || pilihan == 'd' || pilihan == 'e' || pilihan == 'f' ){
        if (pilihan == 'a') {
            printf("hasilnya adalah %d\n", iA + iB);
        }
        else if (pilihan == 'b') {
            printf("hasilnya adalah %d\n", iA - iB);
        }
        else if (pilihan == 'c') {
            printf("hasilnya adalah %d\n", iA * iB);
        }
        else if (pilihan == 'd') {
            printf("hasilnya adalah %.2f\n", (float)iA / iB);
        }
        else if (pilihan == 'e') {
            printf("hasilnya adalah %d\n", div(iA, iB));
        }
        else { /*pilihan == 'f'*/
            printf("hasilnya adalah %d\n", iA % iB);
        }
    }
    else {
        printf("bukan pilihan menu yang benar");
    }

        return 0;
}
