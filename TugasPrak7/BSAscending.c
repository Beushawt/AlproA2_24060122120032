/*Nama File : SequentialSearch  */
/*Nama Pembuat : Sarah Teguh Kinanti Situmeang */
/*Tanggal : 11 Mei 2023 */
/*Deskripsi : Mengurutkan secara ascending atau dari yang paling kecil hingga yang paling besar dengan Bubble Short */

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
    for(i = 0; i<N-1; i++){
         for(j = 0;j<N-i-1;j++){
            if(T[j]>T[j+1]){
                temp = T[j];
                T[j]=T[j+1];
                T[j+1]=temp;
            }
    }
    }
    printf("\nSesudah\n");
    for(i = 0;i<N;i++){
        printf("%d, ",T[i]);
    }
    return 0;
}
