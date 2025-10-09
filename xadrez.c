#include <stdio.h>

int main() {
    // Movimentação da Torre - usando for
    int i;
    printf("Movimento da Torre:\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita %d\n", i);
    }

    // Movimentação do Bispo - usando while
    int j = 1;
    printf("\nMovimento do Bispo:\n");
    while (j <= 5) {
        printf("Cima e Direita %d\n", j);
        j++;
    }

    // Movimentação da Rainha - usando do-while
    int k = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda %d\n", k);
        k++;
    } while (k <= 8);

    printf("\n");

                    //'' movimento do cavalo usando "FOR"  ''
              printf("Movimento do Cavalo:\n");

    int baixo = 2;      // duas casas para baixo     (ação que eu quero fazer!)
    int esquerda = 1;   // uma casa para a esquerda

    // loop externo (para o movimento para baixo)
    for (int i = 1; i <= baixo; i++) {
        printf("Baixo %d\n", i);
    }

    // loop interno (para o movimento para a esquerda)
    for (int j = 1; j <= esquerda; j++) {
        printf("Esquerda %d\n", j);
    }

    return 0;
}
