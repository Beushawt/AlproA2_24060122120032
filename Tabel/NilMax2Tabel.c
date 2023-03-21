/*Nama file : NilMax2Tabel.c*/
/*Deskripsi : Menampilkan nilai max ke 2 pada tabel*/
/*Pembuat   : Sarah Teguh Kinanti Situmeang-24060122120032*/
/*Tgl Buat  : 19 Maret 2023*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    int tabel[10] = {7,6,4,5,1,3,2,5,6,9};
    int i; //iterator
    int n = 10; //panjang tabel
    int max1,max2; //menyimpan nilai maksimum

    //algoritma

    if (n <= 0){
        printf("Bilangan harus positif");
    }
    else{
        max1 = tabel[0];
        max2 = 0;
        for (i=0; i<n; i++){
            if (tabel[i] > max1){
                max2 = max1;
                max1 = tabel[i];
            }
            else if ((tabel[i] > max2) && (tabel[i] != max1) ){
                max2 = tabel[i];
            }
        }

        printf("%d",max2);
    }
    return 0;
}
