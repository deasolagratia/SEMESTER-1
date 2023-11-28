/*
Nama      : Dea Solagratia Simamora
NIM       : 13322040
Deskripsi : Memodifikasi program agar bisa menentukan tiga bilangan dan bisa dijalankan command prompt (gcc)
            dan menerima argument untuk menerima masukan dari user (tidak menggunakan scanf)
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    int z = atoi(argv[3]);

    printf("Masukkan angka pertama : %d\n", x);
    printf("Masukkan angka kedua : %d\n", y);
    printf("Masukkan angka ketiga : %d\n", z);
    if (x>y, x>z){
        printf("%d Lebih besar dari dua angka lainnnya", x);
    }
    else if(y>x, y>z){
        printf("%d Lebih besar dari dua angka lainnya", y);
    }
    else if(z>x, z>y){
        printf("%d Lebih besar dari dua angka lainnya", z);
    }
    return 0;
}