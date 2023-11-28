#include <stdio.h>
int main(){
    FILE *fp; 
    if((fp = fopen("readme.txt", "r")) == NULL) {
        printf("Error reading file!");
    }
    else{
        puts("Succesful opening file..."); 
    }
    fclose(fp); 
    return 0;
}