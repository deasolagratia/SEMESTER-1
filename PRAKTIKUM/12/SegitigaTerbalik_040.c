#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, *m;

    scanf("%i", &n);
    m = malloc(sizeof(int)*n);
    int i, j, k;
    
    for(i = n-1; i >= 0; i--){
        scanf("%i", &m[i]);
    }

    for(i = n-1; i >= 0; i--){
        for(j = m[i]; j > 0; j--){
            for(k = m[i]; k > 0; k--){
                if(k <= j){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
}
