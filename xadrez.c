#include <stdio.h>

int main()
{
    int torre = 0;
    int bispo = 0;
    int rainha;


    printf("Torre:\n");
    
    while (torre < 5) {
        printf("Direita\n");
        torre++;
    }

    printf("\n");

    printf("Bispo:\n");

    do {
        printf("Cima, direita\n");
        bispo++;
    }
    while (bispo < 5);

    printf("\n");

    printf("Rainha:\n");

    for (rainha = 0; rainha < 8; rainha++) {
        printf("Esquerda\n");
    }
    
    return 0;
}