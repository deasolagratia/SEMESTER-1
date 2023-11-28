#include <stdio.h>

int main()
{
    int p1pem, p1pen;
    int p2pem, p2pen;
    int pkalipem, pkalipen;

    scanf("%d,%d", &p1pem, &p1pen);
    scanf("%d,%d", &p2pem, &p2pen);
    pkalipem = p1pem * p2pem;
    pkalipen = p1pen * p2pen;

    printf("Pkali = %d/%d", pkalipem, pkalipen);

    return 0;
}