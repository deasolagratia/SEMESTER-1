#include <stdio.h>

int main () {

    char name[20];

    printf("Nama: ");
    scanf("%s", &name);

    printf("Hallo %s\n", name);
   
    return 0;
}