#include <stdio.h>

int main() 
{
    for(int i = 5; 1 <= i; i--){
      for(int j = 5; i <= j; j--){
            printf("%d ", j);
      }
    
        printf("\n");
    }
}