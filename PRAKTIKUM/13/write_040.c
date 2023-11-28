#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char *filename = "writeme.txt";
    FILE *f;
    char c;
    if((f = fopen(filename, "w")) == NULL) {
        puts("File cannot be opened!");
        exit(1);
    }
    else{
        printf("Masukkan pesan bebas:");
        while((c = getchar()) != '\n' && c != EOF){
            putc(c,f);
        }
    }
    fclose(f);
    return 0;
}