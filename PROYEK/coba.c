
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    char *filename = "pengeluaran.txt";
    if((fp = fopen(filename, "w")) == NULL)
    {
        printf("Cannot open file!\n");
        exit(1);
    }

    char NIM[69];
    char name[80];
    char course[80];
    int score;

    
    for(int i = 0; i < 8; i++)
    {
        printf("Tahun: ");
        scanf("%s", NIM);
        printf("Bulan: ");
        scanf("%s", name);
        printf("Tanggal: ");
        scanf("%s", course);
        printf("Pengeluaran: ");
        scanf("%d", &score);
    
        fprintf(fp, "%s  %s  %s  %d\n", NIM, name, course, score); 
    }
    fclose(fp);

    
    if((fp = fopen(filename, "r")) == NULL)
    {
        printf("cannot open file!\n");
        exit(1);
    }
    int  sum = 0;
    int count =  0;
    while(fscanf(fp, "%s | %s | %s |%d", NIM, name, course, &score) !=  EOF)
    {
        sum += score;
        count++;
    }
    printf("Rata-rata pengeluaran: %d\n", sum/count);
    fclose(fp);
    return 0;
}