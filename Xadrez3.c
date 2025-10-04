#include <stdio.h>

// Torre (5  casas para direita)
void moverTorre(int casas) {
    if (casas > 0) {
        
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

// Rainha (6 vezes para esquerda)
void moverRainha(int casas) {
    if (casas > 0) {
        
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

// Bispo (Movimento Diagonal)
void moverBispo(int casas) {
    if (casas > 0) {
        for (int v = 1; v > 0; v--) {     // vertical
            for (int h = 1; h > 0; h--) { // horizontal
                
                printf("Cima\n");
                printf("Direita\n");
            }
        }
        moverBispo(casas - 1);
    }
}

// Cavalo (Movimento em L)
void moverCavalo(int cima, int direita) {
    for (int i = 1; i <= cima; i++) {
        if (i > 2) break;
        
        printf("Cima\n");
    }

    for (int j = 1; j <= direita; j++) {
        if (j > 1) 
        break;
        
        if (j == 0) 
        continue;
        
        printf("Direita\n");
    }
}

int main() {
    int casasTorre = 5;
    int casasBispo = 4;
    int casasRainha = 6;
    int cavaloCima = 2;
    int cavaloDireita = 1;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    printf("Movimento do Cavalo:\n");
    moverCavalo(cavaloCima, cavaloDireita);
    printf("\n");

    return 0;
}
