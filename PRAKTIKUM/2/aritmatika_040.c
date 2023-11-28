#include<stdio.h>
int main()
{
    int a = 2;
    int b = 3;
    int n;
    int Un;

    printf("Masukkan n :");
    scanf("%d", &n);

    Un = a + (n - 1) *b;
    printf("\n");
    printf("\n");
    printf("Nilai Un = %d + (%d - 1) * %d\n",a, n, b);
    
    printf("Nilai Un = %d\n", Un);
    printf("Nilai n : %d\n", n);

    return 0;
}