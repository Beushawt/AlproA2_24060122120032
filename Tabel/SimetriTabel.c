/*Nama File : SimetriTabel.c */
/*Deskripsi : Melakukan cek apakah tabel T1 dan T2 simetri atau tidak*/
/*Pembuat   : Sarah Teguh Kinanti Situmeang-24060122120032*/
/*Tgl Buat  : 19 Maret 2023*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i; 
    int count; 
    int *JumlahElmt1; 
    int *JumlahElmt2; 
    int masukkan1; 
    int masukkan2; 

    count = 0;

    printf("Masukkan Element Array 1 : ");
    scanf("%d",&masukkan1);
    printf("Masukkan Elemet Array 2 : ");
    scanf("%d",&masukkan2);
    
    JumlahElmt1 = (int*)malloc(masukkan1*sizeof(int));
    JumlahElmt2 = (int*)malloc(masukkan2*sizeof(int));

    if (masukkan1 <= 0 && masukkan2 <= 0){
        printf("Masukkan tidak boleh nol/negatif");
    }
    else {
        if (masukkan1 != masukkan2){
            printf("\nArray Tidak Simetris");
        }
        else {
            for(i=0;i<masukkan1;i++){
                printf("\nMasukkan data pada array 1 : ");
                scanf("%d",JumlahElmt1+i);
            }

            for(i=0;i<masukkan2;i++){
                printf("\nMasukkan data pada array 2 : ");
                scanf("%d",JumlahElmt2+i);
            }

            for(i=0;i<masukkan1;i++){
                if (JumlahElmt1[i] != JumlahElmt2[i]){
                    count += 1;
                }
            }

            if(count > 0){
                printf("\nArray Tidak Simetris");
            }
            else {
                printf("\nArray Simestris");
            }
        }
        free(JumlahElmt1);
        free(JumlahElmt2);
    }
    return 0;
}