#include <stdio.h>
int main ()
{
    //kamus
    int counter = 1;
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    //algoritma
    while (counter <= number)
    {
        printf("It is %d\n", counter);
        ++counter;
    }

    return 0;
}