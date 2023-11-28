#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    char *filename = "UTS-3digitsNIM-score.txt";
    if((fp = fopen(filename, "w")) == NULL)
    {
        printf("Cannot open file!\n");
        exit(1);
    }

    char NIM[10];
    char name[50];
    char course[50];
    int score;

    for(int i = 0; i < 8; i++)
    {
        printf("NIM: ");
        scanf("%s", NIM);
        printf("Name: ");
        scanf("%s", name);
        printf("Course: ");
        scanf("%s", course);
        printf("Score: ");
        scanf("%d", &score);

        fprintf(fp, "%s | %s | %s | %d\n", NIM, name, course, score);
    }
    fclose(fp);

    if((fp = fopen(filename, "r")) == NULL)
    {
        printf("Cannot open file!\n");
        exit(1);
    }

    int sum = 0;
    int count = 0;
    while(fscanf(fp, "%s | %s | %s | %d", NIM, name, course, &score) != EOF)
    {
        sum += score;
        count++;
    }
    printf("Average score: %d\n", sum/count);
    fclose(fp);
    return 0;
}