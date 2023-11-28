/*
Nama      : Dea Solagratia Simamora
NIM       : 13322040
Deskripsi : Memodifikasi program agar bisa menentukan dua bilangan dan bisa dijalankan command prompt (gcc)
            dan menerima argument untuk menerima masukan dari user (tidak menggunakan scanf)
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);

    printf("Masukkan angka pertama : %d\n", x);
    printf("Masukkan angka kedua : %d\n", y);
    if (x>y){
        printf("%d Lebih besar daripada angka kedua", x);
    }
    else if(y>x){
        printf("%d Lebih besar daripada angka pertama", y);
    }
    return 0;
}