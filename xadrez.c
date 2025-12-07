#include <stdio.h>

    // Função 

void moverBispo(int passos) {
    if(passos == 0) return;  

    // Loop 
    for(int i = 0; i < 1; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    moverBispo(passos - 1);  
}
      // Função principal

int main() {
    // Constantes definindo quantas casas cada peça se move
    const int BISPO_PASSOS = 5;
    const int TORRE_PASSOS = 5;
    const int RAINHA_PASSOS = 8;
    const int CAVALO_VERT = 2;   
    const int CAVALO_HOR = 1;     

    int i, j;

    
    // Nível Novato loops simples
   
    printf("Movimentação do Bispo (Diagonal Cima-Direita - Recursiva):\n");
    moverBispo(BISPO_PASSOS);
    printf("\n");

    printf("Movimentação da Torre (Direita):\n");
    for(i = 0; i < TORRE_PASSOS; i++) {
        printf("Direita\n");
    }
    printf("\n");

    printf("Movimentação da Rainha (Esquerda):\n");
    for(i = 0; i < RAINHA_PASSOS; i++) {
        printf("Esquerda\n");
    }
    printf("\n");

    // Nível Aventureiro: Cavalo em L 
   
    printf("Movimentação do Cavalo (L - Baixo e Esquerda):\n");
    for(i = 0; i < CAVALO_VERT; i++) {   
        j = 0;
        do {                            
            printf("Baixo\n");
            printf("Esquerda\n");
            j++;
        } while(j < CAVALO_HOR);
    }
    printf("\n");

   
    // Nível Mestre Cavalo em L (Cima + Direita) com continue e break
   
    printf("Movimentação do Cavalo (L - Cima e Direita - Nível Mestre):\n");
    for(i = 0; i < 1; i++) {              
        for(j = 0; j < 1; j++) {         
            if(i == 0 && j == 0) continue; 
            printf("Cima\n");
            printf("Direita\n");
            break; 
        }                       
    }

    return 0;
}
