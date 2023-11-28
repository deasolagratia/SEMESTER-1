//Nama          : Dea Solagratia Simamora
//NIM           : 13321040
//Jurusan       : D3 Teknologi Komputer

/* Program array dinamis multidimensi dan terapkan operasi penjumlahan pada array */

#include <stdio.h>
#include <stdlib.h>


int main()
{   int dimensi1;
    int dimensi2;
    int i,j;
    printf("Masukkan nilai dimensi pertama :"); scanf("%d",&dimensi1);
    printf("Masukkan nilai dimensi ke dua :");scanf("%d",&dimensi2);
   
    int **myArr = (int **) malloc(sizeof(int*) * dimensi1);
     for(i = 0; i < dimensi2 ; i++){
          myArr[i] = (int*) malloc(sizeof(int) * dimensi2);
     }
   int value;
   int penjumlahan;
   penjumlahan = 0;
   for(i = 0; i < dimensi1; i++){
        for(j = 0; j < dimensi2; j++){
             printf("Masukkan nilai dimensi ke [%d , %d] = ",i,j);
             scanf("%d", &value);
             myArr[i][j] = value;
             penjumlahan = penjumlahan + value;
        }
   }
   printf("Maka hasil penjumlahan array anda adalah = %d",penjumlahan);
  return 0;
}