#include <stdio.h>

int array[5] = {100, 200, 300, 400, 500};

int main()
{
    int *pointer;

    printf("Alamat elemen ke-1 array (&array[0]) = %d\n", &array[0]);
    printf("Alamat elemen ke-1 array (array)     = %d\n\n", array);

    pointer = array; //tugaskan alamat ke-1 array (array) ke pointer
    printf("Alamat elemen ke-1 array (pointer)   = %d\n\n", pointer);
    
    printf("Elemen pertama array = %d\n", array[0]); //akses secara langsung
    printf("Elemen pertama array = %d\n", *pointer); //akses tak langsung (Indirection operator)
    
}