#include <stdio.h>

void moverTorre(int casas) {
    if (casas > 0) {
        printf("direita\n");
        moverTorre(casas - 1);
    }
}

void moverBispo(int casas) {
    if (casas > 0) {
        printf("cima, direita\n");
        moverBispo(casas - 1);
    }
}

void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

int main() {

    printf("Torre:\n");
    moverTorre(5);
    printf("\n");

    printf("Bispo:\n");
    moverBispo(5);
    printf("\n");

    printf("Rainha:\n");
    moverRainha(8);
    printf("\n");

    int cavalo = 1;


    printf("Cavalo:\n");
    while (cavalo--) {
        for (int i = 0; i < 2; i++) {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }

    return 0;
}