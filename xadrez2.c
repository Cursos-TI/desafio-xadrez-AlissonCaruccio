#include <stdio.h>

int main() {
    int Torre = 5; // 5 casas
    int Bispo = 5; //  5 casas
    int Rainha = 8; // 8 casas
    int CavaloCima = 2; // número de casas para baixo (movimento do cavalo)
    int CavaloDireita = 1; // número de casas para esquerda (movimento do cavalo)

   
    // Movimentação da TORRE (for)
   
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= Torre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimentação do BISPO (while)
  
    printf("Movimento do Bispo:\n");
    int i = 1;
    while (i <= Bispo) {
        printf("Cima\n");
        printf("Direita\n");
        i++;
    }
    printf("\n");

    
    // Movimentação da RAINHA (do-while)
   
    printf("Movimento da Rainha:\n");
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= Rainha);
    printf("\n");

   
    // Movimentação do cavalo
   
    printf("Movimento do Cavalo:\n");

    int movimentoCompleto = 1; // flag para controlar o movimento em "L"

    // Loop externo
    while (movimentoCompleto--) 
    {
        // duas casas para baixo (loop for interno)
        for (int k = 0; k <  CavaloCima; k++) {
            printf("Cima\n");
        }

        //  uma casa para a esquerda
        for (int m = 0; m < CavaloDireita; m++) {
            printf("Direita\n");
        }
    }

    return 0;
}
