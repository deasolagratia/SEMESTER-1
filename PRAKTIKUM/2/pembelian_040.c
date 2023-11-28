#include <stdio.h>

int main () {
    int a = 2;
    int b = 2;
    int c = 2;
    float sabun = 8.000;
    float shampo = 35.000;
    float sabun_wajah = 39.000;
    float total_uang = 310.000;
    float total_belanja;
    float hasil;

    total_belanja = (sabun * a) + (shampo * b) + (sabun_wajah * c);
    printf("Total belanja Pak Purwa yaitu : %.3f\n", total_belanja);
    hasil = total_uang - total_belanja;
    printf("Sisa uang kembalian yaitu : %.3f\n", hasil);

    return 0;
}