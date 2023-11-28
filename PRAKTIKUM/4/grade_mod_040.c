/*
Nama      : Dea Solagratia Simamora
NIM       : 13322040
Deskripsi : Memodifikasi program agar bisa dijalankan dengan command prompt (gcc)
            dan menerima argument untuk menerima masukan dari user (tidak menggunakan scanf)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[])
{
    float x = atoi(argv[1]);

    char ch[1];

    printf("Nilai Mata Kuliah : %.0f\n", x);
    if(x>=80)
    {
    strcpy(ch,"A");
    }
    else if (x>=65)
    {
    strcpy(ch,"B");
    }
    else if (x>=50)
    {
    strcpy(ch,"C");
    }
    else if (x>=35)
    {
    strcpy(ch,"D");
    }
    else
    {
    strcpy(ch,"E");
    }
    printf("Anda mendapat grade %s", ch);
    return 0;
}