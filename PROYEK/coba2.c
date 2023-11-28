#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int pilih;
int main()
{
    FILE *fp;
    char *filename = "write.txt";
    if((fp = fopen(filename, "a+")) == NULL)
    {
        printf("Cannot open file!\n");
        exit(1);
    }

    char tahun[80];
    char bulan[80];
    char tanggal[80];
    float pengeluaran;

    menu:
        printf("Tahun: ");
        scanf("%s", tahun);
        printf("Bulan: ");
        scanf("%s", bulan);
        printf("Tanggal: ");
        scanf("%s", tanggal);
        printf("Pengeluaran: ");
        scanf("%f", &pengeluaran);
        fprintf(fp, "| %s\n, %s\n, %s\n, %0.f\n", tahun, bulan, tanggal, pengeluaran);


    konfirmasi:
        printf("Apakah ingin melakukan pembukuan lain?\n");
        printf(" 1. Ya\n");
        printf(" 2. Tidak\n");
        printf(" Select one\n");
        scanf("%d", &pilih);
        if (pilih == 1)
            goto menu;
        else if (pilih == 2)
            goto end;       

    fclose(fp);

    end:
        printf("Terimakasih\n");

        if((fp = fopen(filename, "r")) == NULL)
    {
        printf("cannot open file!\n");
        exit(1);
    }
    int  sum = 0;
    int count =  0;
    while(fscanf(fp, "||   %s     ||   %s     ||   %s      ||     %0.f        ||", tahun, bulan, tanggal, &pengeluaran) !=  EOF)
    {
        sum += pengeluaran;
        count++;
    }
    printf("Rata - rata Pengeluaran: %d\n", sum/count);
    fclose(fp);
    return 0;
}