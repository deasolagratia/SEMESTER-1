#include <stdio.h>

int main(){
    int a = 5;
    int *ptr1;
    int **ptr2;

    ptr1 = &a;
    ptr2 = &ptr1;

    printf("%d\n", a);
    printf("%d\n", *ptr1);
    printf("%d\n", **ptr2);

}