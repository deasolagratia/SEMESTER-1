#include <stdio.h>

int main()
{
    int n = 5;
    int row, hyp, ctr;
    char alpha = 'A';
    for (row = 1; row <= n; row++)
    {

        for (ctr = 1; ctr <= row; ctr++)
        {
            printf("%c", alpha--); 
        }
        alpha = alpha + (row + 1);
        printf("\n");
    }
}