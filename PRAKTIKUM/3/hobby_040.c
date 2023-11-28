#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    char str2[100];
    char str3[100];

    printf("Enter Hobby 1: ");
    scanf("%s", str1);
    printf("Enter Hobby 2: ");
    scanf("%s", str2);
    printf("Enter Hobby 3: ");
    scanf("%s", str3);


    printf("\n");
    
    strupr(str1);
    strupr(str2);
    strupr(str3);

    printf("My Hobby is : ");
    puts(str1), puts(str2), puts(str3);

    return 0;
}