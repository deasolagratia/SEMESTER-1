#include<stdio.h>
#include<stdlib.h>
int x, y, z; 
int check(x, y, z){
    if((z%x == 0) || (z%y == 0)){
        return z;
    }else{
        check(x, y, z-1);
    }
}

int main(){
	int hasil;
    scanf("%i %i %i", &x, &y, &z);

    hasil = check(x, y, z);
    printf("return %i", hasil);
}
