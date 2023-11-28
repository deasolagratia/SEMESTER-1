#include <stdio.h>
#include <string.h>

int main()
{
    int a[20];
    FILE *fp = fopen("utss.txt","r");
    char buff[255],*p;
    int i,j,k;
    int sum;

    while(fgets(buff,255,fp) != NULL)
    {
        i = 0;
        k = 0;
        sum = 0;
        p = strtok(buff," ");
        while(p!=NULL)
        {
            if(i>1)
            a[k++] = atoi(p);
            p = strtok(NULL,"|");
            i++;
        }
        for(j=0;j<k;j++)
        sum += a[j];

        printf("%d\n",(int) (sum/k));
    }
    printf("avg = %lf \n", (double)sum / j);
    return 0; 
}