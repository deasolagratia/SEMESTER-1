#include <stdio.h>

struct Pecahan {
    int Pembilang;
    int Penyebut;
};

struct Pecahan perkalian(struct Pecahan P1, struct Pecahan P2) {
    struct Pecahan PKali;
    PKali.Pembilang = P1.Pembilang * P2.Pembilang;
    PKali.Penyebut = P1.Penyebut * P2.Penyebut;
    return PKali;
}

int main() {
    struct Pecahan P1, P2, PKali;
    
    printf("Masukkan Pecahan Pertama (Pembilang Penyebut): ");
    scanf("%d %d", &P1.Pembilang, &P1.Penyebut);

    printf("Masukkan Pecahan Kedua (Pembilang Penyebut): ");
    scanf("%d %d", &P2.Pembilang, &P2.Penyebut);

    PKali = perkalian(P1, P2);

    printf("Hasil perkalian: %d/%d\n", PKali.Pembilang, PKali.Penyebut);

    return 0;
}
