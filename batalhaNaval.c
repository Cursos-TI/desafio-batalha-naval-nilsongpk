#include <stdio.h>

int main() {

    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10]; // Tabuleiro 10x10

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    int linhaHorizontal = 2, colunaHorizontal = 4;

    int linhaVertical = 5, colunaVertical = 6;

    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaHorizontal][colunaHorizontal + i] = 3;
    }

    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaVertical + i][colunaVertical] = 3;
    }

    printf("TABULEIRO BATALHA NAVAL\n");
    printf("   ");
    for (int j = 0; j < 10; j++) {
        printf("%d ", j);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%c  ", linha[i]);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
