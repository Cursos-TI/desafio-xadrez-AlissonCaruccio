#include <stdio.h>

int main() {
    int Torre = 5;
    int Bispo = 5;
    int Rainha = 8;

 // Movimentação torre (for)
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= Torre; i++) 
    {
        printf("Direita\n");
    }
    printf("\n");

   // Movimentação bispo (while)
    printf("Movimento do Bispo:\n");
    int i = 1;
    while (i <= Bispo) 
    {
        printf("Cima, Direita\n");
        i++;
    }
    printf("\n");

   // Movimentação rainha (do-while)
    printf("Movimento da Rainha:\n");
    int j = 1;
    do 
    {
        printf("Esquerda\n");
        j++;
    } while (j <= Rainha);

    return 0;
}
