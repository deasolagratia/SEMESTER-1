/*
Nama      : Dea Solagratia Simamora
NIM       : 13322040
Deskripsi : Memodifikasi program agar bisa dijalankan dengan command prompt (gcc)
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
    if (x%2==0)
        printf("%d bilangan genap\n", x);
    else
        printf("%d bilangan ganjil\n", x);
    getch();
    return 0;
}