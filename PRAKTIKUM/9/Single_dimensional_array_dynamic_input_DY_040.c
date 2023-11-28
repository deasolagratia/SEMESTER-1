//Nama      : Dea Solagratia Simamora
//NIM       : 113322040
/*Program yang menunjukkan bagaimana menghitung panjang array*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int *a;
    int sz;

    printf("Masukkan ukuran array : ");
    scanf("%d", &sz);
    a = (int*)malloc(sz*sizeof(int));

    for(i = 1;i<=sz;i++) {
        scanf("%d", &a[i]);
    }

    printf("Elemen array : ");
    for(i = 1;i<=sz;i++) {
        printf("%d ", a[i]);
    }

    system("PAUSE");
    return 0;

}