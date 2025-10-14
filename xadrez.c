                 // XADREZ M
#include <stdio.h>

// ' Funções Recursivas'

// TORRE (recursiva)
void moverTorre(int casas) {
    if (casas == 0) return; // Caso base
    printf("Direita %d\n", casas);
    moverTorre(casas - 1); // Chamada recursiva
}

// RAINHA(recursiva)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda %d\n", casas);
    moverRainha(casas - 1);
}

// BISPO (recursiva + loops aninhados) ---
void moverBispo(int vertical, int horizontal) {
    if (vertical == 0) return;

    // Loop externo: movimento vertical
    for (int i = 1; i <= vertical; i++) {
        // Loop interno: movimento horizontal
        for (int j = 1; j <= horizontal; j++) {
            printf("Cima e Direita (Passo %d,%d)\n", i, j);
        }
    }

    // Chamada recursiva reduzindo o movimento diagonal
    moverBispo(vertical - 1, horizontal - 1);
}

// CAVALO (loops)
// Movimento: duas casas para cima e uma para a direita
void moverCavalo() {
    printf("Movimento do Cavalo:\n");

    int movimentos = 0;

    for (int i = 1; i <= 2; i++) {           // duas casas para cima
        for (int j = 1; j <= 1; j++) {       // uma casa para direita
            if (i == 2 && j == 1) {
                printf("Cima %d\n", i);
                printf("Direita %d\n", j);
                movimentos++;
                break; // Sai após completar o "L"
            }

            if (i == 1) {
                printf("Cima %d\n", i);
                continue; // pula o restante e volta ao topo do loop
            }
        }
    }

    printf("Total de movimentos do cavalo: %d\n", movimentos);
}

// FUNÇÃO BASE
int main() {
    // === TORRE ===
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\n");

    //   MOVIMENTO DO BISPO
    printf("Movimento do Bispo:\n");
    moverBispo(3, 3);

    printf("\n");

    //   MOVIMENTO DO  RAINHA
    printf("Movimento da Rainha:\n");
    moverRainha(8);

    printf("\n");

    //  MOVIMENTO DO CAVALO
    moverCavalo();

    return 0;
}
