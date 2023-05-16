/*Nama File : SequentialSearch  */
/*Nama Pembuat : Sarah Teguh Kinanti Situmeang */
/*Tanggal : 11 Mei 2023 */
/*Deskripsi : Mengurutkan secara ascending atau dari yang paling besar hingga yang paling kecil dengan Bubble Short */

int main(void){
    int T[7]={1,-3,5,7,9,8,9};
    int N = 7;
    int i,j;
    int temp;

    //Algoritma
    printf("Sebelum\n");
    for(i = 0; i<N; i++){
        printf("%d, ",T[i]);
    }
    for(i = 0; i<N; i++){
         for(j = i + 1; j<N ;j++){
            if(T[i]<T[j]){
                temp = T[i];
                T[i]=T[j];
                T[j]=temp;
            }
    }
    }
    printf("\nSesudah\n");
    for(i = 0;i<N;i++){
        printf("%d, ",T[i]);
    }
    return 0;
}
