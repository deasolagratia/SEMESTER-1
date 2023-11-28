#include <stdio.h>

#include<stdio.h>
#include <math.h>

    int a = 1;
    int b = 3;
    int i;
    int n;
    int Un;
    int main () {

    printf("Masukkan n :");
    scanf("%i", &n);

    Un = a + (n - 1) * b;
    for (i = 1; i <= Un; i+b)
    {
        printf ("%d", i);
    }
}
