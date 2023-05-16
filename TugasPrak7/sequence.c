/*Nama File : SequentialSearch  */
/*Nama Pembuat : Sarah Teguh Kinanti Situmeang */
/*Tanggal : 11 Mei 2023 */
/*Deskripsi : Menemukan ideks keberapa X yang dicari*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    //kamus lokal
    int T[8]={1,3,5,-8,12,90,3,5};
    int N = 8;
    int IX;
    int X = 100;
    int i;

    //Algoritma
    i = 0;

   while (i < N && T[i] != X){
        i = i + 1;
   }
   if (T[i] == X){
    IX = i + 1;
    printf ("%d terdapat pada urutan %d\n", X, IX);
   }else{
    IX = 0;
    printf ("%d tidak terdapat dalam tabel\n", X);
   }

 return 0;

}
