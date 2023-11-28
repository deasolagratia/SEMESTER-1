/*
Nama      : Dea Solagratia Simamora
NIM       : 13322040
Deskripsi : membuat program untuk menghitung peringkat_kredit dari seorang nasabah 
perbankan
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char peringkat_kredit = atol(argv[1]);
    float pokok_utang = atof(argv[2]);
    int masa_tunggak = atoi(argv[3]);

    if(pokok_utang <= 100000000 && masa_tunggak <= 6){
        printf("Peringkat kredit anda dijadwalkan");
    }
    else if(pokok_utang <=100000000 && masa_tunggak > 6){
        printf("Peringkat kredit anda diGagalkan");
    }
    else if(pokok_utang > 100000000 && masa_tunggak <= 6){
        printf("Peringkat kredit anda diJadwalkan");
    }
    else if(pokok_utang > 100000000 && masa_tunggak > 6){
        printf("Peringkat kredit anda diGagalkan");
    }
    return 0;
}