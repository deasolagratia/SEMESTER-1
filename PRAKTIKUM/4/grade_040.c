/*
Nama      : Dea Solagratia Simamora
NIM       : 13322040
Deskripsi : Memodifikasi program agar bisa dijalankan dengan command prompt (gcc)
            dan menerima argument untuk menerima masukan dari user (tidak menggunakan scanf)
*/

#include <stdio.h>
int main()
{
        //kamus:
        float x;
        char ch;
        //Algoritma:
        printf("Masukkan nilai kuliah anda:");
        scanf("%f", &x)
        if (x > 80) ch = 'A';
        else if (x>=65) ch = 'B';
        else if (x>=50) ch = 'C';
        else if (x>=35) ch = 'D';
        else ch = 'E';
        printf("Anda mendapatkan grade %d\n", ch);
        getch();
        return 0; 
}