#include <stdio.h>

//deklarasi dan sekaligus inisialisasi variabel tipe integer
int a_var = 10;

//deklarasi variable pointer ke variable tipe integer
int *a_ptr; 

int main()
{
    //Inisialasi nilai pointer menunjuk ke alamat a_var
    a_ptr = &a_var; //Simbol "&" dibaca address of (alamat dari)

    //Akses dan tampilkanalamat memori yang ditunjuk pointer
    printf("\nAlamat memori ditunjuk *a_ptr = %d", a_ptr);
    printf("\nAlamat memori varriabel &a_var = %d\n", &a_var);


    //Akses dan tampilkan nilai variabel : a_var
    printf("\nAkses langsung (a_var)        : a_var = %d", a_var);
    printf("\nAkses tak langsung (*a_ptr)   : a_var = %d\n", *a_ptr);
}