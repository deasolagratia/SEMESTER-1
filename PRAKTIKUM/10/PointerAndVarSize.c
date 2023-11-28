#include <stdio.h>

int main(int argc, char *argv[])
{
    //deklarasi dan inisialisasi variabel
    int var_int = 123455;
    float var_float = 780.478;
    char var_char = 65; //huruf A

    //deklarasi dan inisialisasi pointer
    int *ptr_int = &var_int;
    float *ptr_float = &var_float;
    char *ptr_char = &var_char;

    printf("Ukuran char     = %d\n", sizeof(char));
    printf("Ukuran float    = %d\n", sizeof(float));
    printf("Ukuran integer  = %d\n\n", sizeof(int));

    /*Print alamat variabel,
        alamat menunjuk kepada byte pertama*/
    printf("Alamat var_char yang ditunjuk ptr_char      = %d\n", ptr_char);
    printf("Alamat var_float yang ditunjuk ptr_float    = %d\n", ptr_float);
    printf("Alamat var_int yang ditunjuk ptr_int        = %d\n", ptr_int);
}