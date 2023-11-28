#include <stdio.h>

int main(){

    float a = 213;
    float b = 4;
    float c = 421;
    float cd;
    float hasil;

    printf("213cd + 4 = 421\n");
    printf("213cd = 417\n");
    printf("cd = 417/213\n");

    //213cd + 4 = 421
    //213cd = 417
    //(213cd + 3) = 417 * 3

    cd = (c - b)/a;
    printf("cd adalah : %f\n", cd);
    hasil = cd * 639;
    printf("maka hasil dari 639cd: %f", hasil);

    return 0;
    
    }
