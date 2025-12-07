#include <stdio.h>

int main() {
    // NIVEL NOVATO
    const int BISPO_PASSOS = 5;
    const int TORRE_PASSOS = 5;
    const int RAINHA_PASSOS = 8;
    int i;

    // Bispo: diagonal superior direita
    printf("Movimentação do Bispo (Diagonal Superior Direita):\n");
    for(i = 0; i < BISPO_PASSOS; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");

    // Torre direita
    printf("Movimentação da Torre (Direita):\n");
    for(i = 0; i < TORRE_PASSOS; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Rainha esquerda
    printf("Movimentação da Rainha (Esquerda):\n");
    for(i = 0; i < RAINHA_PASSOS; i++) {
        printf("Esquerda\n");
    }
    printf("\n");

    return 0;
}


