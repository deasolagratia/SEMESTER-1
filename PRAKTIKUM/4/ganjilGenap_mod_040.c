/*
Nama      : Dea Solagratia Simamora
NIM       : 13322040
Deskripsi : Memodifikasi program agar bisa dijalankan dengan command prompt (gcc)
            dan menerima argument untuk menerima masukan dari user (tidak menggunakan scanf)
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x;
    x = atoi(argv[1]);  
    if ((x%2)==0)
    {
        printf("%d adalah bilangan genap", x);    
    }
    else
    {
        printf("%d adalah bilangan ganjil\n", x);
    }
    return 0;
}