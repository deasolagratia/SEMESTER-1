//Nama          : Dea Solagratia Simamora
//NIM           : 13321040
//Jurusan       : D3 Teknologi Komputer

/* Program array statis multidimensi dan terapkan operasi penjumlahan pada array */
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, j, q, r, matriksA[10][10], matriksB[10][10], hasil[10][10];

  printf("Masukkan jumlah baris matriks: ");
  scanf("%d", &q);
  printf("Masukkan jumlah kolom matriks: ");
  scanf("%d", &r);
  printf("Masukkan elemen matrix pertama: \n");

  for (i = 0; i < q; i++){
    for (j = 0; j < r; j++) {
      scanf("%d", &matriksA[i][j]);
    }
  }
  printf("Masukkan elemen matrix kedua: \n");
  for (i = 0; i < q; i++){
    for (j = 0; j < r; j++){
      scanf("%d", &matriksB[i][j]);
    }
  }
  printf("hasil penjumlahan matrix: \n");
  for (i = 0; i < q; i++) {
    for (j = 0; j < r; j++){
      hasil[i][j] = matriksA[i][j] + matriksB[i][j];
      printf("%d \t", hasil[i][j]);
    }
    printf("\n");
  }
  return 0;
}