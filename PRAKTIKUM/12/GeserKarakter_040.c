#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main(){
    int N, M = 0, j = 1;
    char *name = "rudy";
    int x, i;
    
    scanf("%i", &N);
    int len = (int) strlen(name)-1;

    for( i = 1; i <= N; i++){
        M = 0;
        if(j > len){
            j = 0;
        }

        for( x = j; x <= len; x++){
            printf("%c", name[x]);
            M++;
        }

        for(x = 0; x <= len-M; x++){
            printf("%c", name[x]);
        }

        j++;
    }
}
