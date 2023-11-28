#include<stdio.h>

int main()
{
        int a;
        int b;
        int jumlah = 0;
        printf("Masukkan nilai terendah :");
        scanf("%d", &a);

        printf("Masukkan nilai tertinggi:");
        scanf("%d", &b);

        printf("Sum of even numbers from %d to %d is ", a, b);
        while(a<b) 
        {
            if (a%2==0)
            {
                jumlah= jumlah+a;
            }
            a++;
        }
        printf("%d\n", jumlah);

    return 0;
}
           
