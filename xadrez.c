#include <stdio.h>

// Desafio de Xadrez - MateCheck

void moverBispo(int casas){
    if (casas > 0){
        printf("Cima, direita\n");
        moverBispo(casas - 1);
    }
}
void moverTorre(int casas){
    if (casas > 0){
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}
void moverRainha(int casas){
    if(casas > 0){
    printf("Esquerda\n");
    moverRainha(casas - 1);
}
}
int main() {

    int movimento_cavalo = 2;

    // Implementação de Movimentação do Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(5);

    // Implementação de Movimentação da Torre
    printf("\nMovimento da Torre:\n");
    moverTorre(5);

    // Implementação de Movimentação da Rainha
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.

    printf("\nMovimento do cavalo\n");

    for (int mov_horizontal = 1; mov_horizontal; mov_horizontal--){
        int movimentos_executados =  0;
        while (movimentos_executados < movimento_cavalo){
            printf("Cima\n");
            movimentos_executados++;
        }
        printf("Direita\n");
    }

    return 0;
}
