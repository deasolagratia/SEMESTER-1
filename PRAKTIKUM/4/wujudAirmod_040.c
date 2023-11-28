/*
Nama      : Dea Solagratia Simamora
NIM       : 13322040
Deskripsi : Memodifikasi program agar bisa menentukan wujud dari air dan dijalankan dengan command prompt (gcc)
            dan menerima argument untuk menerima masukan dari user (tidak menggunakan scanf)
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int x = atoi(argv[1]);

    printf("Masukkan suhu : %d\n", x);
    if(x<0){
        printf("Bentuk suhu Padat");
    }
    else if(x<=0, x<100){
        printf("Bentuk suhu Cair");
    }
    else if(x>=100){
        printf("Bentuk suhu Gas");
    }
}