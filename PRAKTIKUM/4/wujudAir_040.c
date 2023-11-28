/*
Nama      : Dea Solagratia Simamora
NIM       : 13322040
Deskripsi : Memodifikasi program agar bisa menentukan wujud dari air dan dijalankan dengan command prompt (gcc)
            dan menerima argument untuk menerima masukan dari user (tidak menggunakan scanf)
*/

#include <stdio.h>

int main()
{
    //Kamus
    int x;
    //Algoritma
    printf("Masukkan sebuah bilangan bulat:");
    scanf("%d", &x);
    if (x < 0)
    {
        printf("%d berwujud padat\n", x);
    }
    if (0 <= x < 100)
    {
        printf("%d berwujud cair\n", x);
    }
    if (x >= 100)
    {
        printf("%d berwujud gas\n", x)
    }
    else (x > 0)
    {
        printf("%d berwujud cair\n", x);
    }

    return 0;
}