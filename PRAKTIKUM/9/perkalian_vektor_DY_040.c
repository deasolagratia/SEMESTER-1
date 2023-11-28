//Nama          : Dea Solagratia Simamora
//NIM           : 13321040
//Jurusan       : D3 Teknologi Komputer

/* Program array untuk perkalian vektor */

#include <stdio.h>

int main(){
    int n,x[100],y[100],a=0;
    long long inner=0;
    printf("Berikan banyak vektor : ");
    scanf("%d",&n);
    while(n!=0)
    {
        printf("Berikan x dan y dari vektor ke %d : ",a+1);
        scanf("%d%d",&x[a],&y[a]);
        inner+=x[a]*y[a];
        n--;
        a++;
    }
    printf("Hasil perkalian vektor adalah %lld\n",inner);
    return 0;
    
}
