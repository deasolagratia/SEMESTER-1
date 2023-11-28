#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    char str2[100];
    char str3[100];
    char temp[100];

    printf("Masukkan word 1: ");
    scanf("%s", str1);
    printf("Masukkan word 2: ");
    scanf("%s", str2);
    printf("Masukkan word 3: ");
    scanf("%s", temp);


    printf("\n");
    
    strcpy(str3, str1);
    strcpy(str1, temp);
    strcpy(str2, str2);
    strcpy(temp, str3);

    printf("Word 1 : ");
    puts(str1);
    printf("Word 2 : ");
    puts(str2);
    printf("Word 3 : ");
    puts(str3);

    return 0;
}