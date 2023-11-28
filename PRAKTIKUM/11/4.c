#include <stdio.h>
int main()
{
    int input;
    printf("Masukkan Sebuah Angka: ");
    scanf("%d", &input);
    int i = 0;
    int min = 0;
    for (i = 1, min = input; i <= input; i++, min--)
    {
        printf("%d, ", i);
        printf("%d, ", min);
    }
    return 0;
}