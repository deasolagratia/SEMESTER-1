#include <stdio.h>

int main(){
    int i, j, chr;
    int input;
    printf("Masukkan banyak angka : ");
    scanf("%d", &input);
    for (i = 0; i < input; i++){
        chr=65;
        for(j = 0; j <=i; j++){
            if(j%2==0 && i %2==0 || i%2!=0 && j%2!=0){
                printf("* ");
                chr++;
            }
            else{
                printf("%c ", chr);
                chr++;
            }
        }
        printf("\n");
    }
    return 0;
}