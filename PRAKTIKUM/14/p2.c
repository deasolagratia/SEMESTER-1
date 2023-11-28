#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *pFile;
    int num;
    int sum = 0;
    int count = 0;

    if ((pFile = fopen("utsss.txt", "r")) == NULL) {
        printf("Error opening file %s\n", "utsss.txt");
        return 1;
    }
    while (fscanf(pFile, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(pFile);

    printf("count = %d \n", count);
    printf("sum = %d \n", sum);
    printf("avg = %lf \n", (double)sum / count);

    return 0;
}