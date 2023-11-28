#include <stdio.h>

int main(void) {
    int num = 10;
    int *ptr = &num;

    //we can also check with 0 instesd pf NULL
    if(ptr == NULL)
        printf("ptr: NULL\n");
    else 
        printf("ptr: NOT NULL\n");

    //assigning 0
    ptr = 0;
    if(ptr == NULL)
        printf("ptr: NULL\n");
    else
        printf("ptr: NOT NULL\n");

    return 0;
}