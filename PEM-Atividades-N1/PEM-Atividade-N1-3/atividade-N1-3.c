#include <stdio.h>

void inicializarTabuleiro(char tabuleiro[8][8][4]) {
    // Colocar as peças pretas
    tabuleiro[0][0][0] = 'P'; tabuleiro[0][0][1] = 'T'; tabuleiro[0][0][2] = '1';
    tabuleiro[0][1][0] = 'P'; tabuleiro[0][1][1] = 'C'; tabuleiro[0][1][2] = '1';
    tabuleiro[0][2][0] = 'P'; tabuleiro[0][2][1] = 'B'; tabuleiro[0][2][2] = '1';
    tabuleiro[0][3][0] = 'P'; tabuleiro[0][3][1] = 'D'; tabuleiro[0][3][2] = ' ';
    tabuleiro[0][4][0] = 'P'; tabuleiro[0][4][1] = 'R'; tabuleiro[0][4][2] = ' ';
    tabuleiro[0][5][0] = 'P'; tabuleiro[0][5][1] = 'B'; tabuleiro[0][5][2] = '2';
    tabuleiro[0][6][0] = 'P'; tabuleiro[0][6][1] = 'C'; tabuleiro[0][6][2] = '2';
    tabuleiro[0][7][0] = 'P'; tabuleiro[0][7][1] = 'T'; tabuleiro[0][7][2] = '2';

    // Colocar peões pretos
    for (int i = 0; i < 8; i++) {
        tabuleiro[1][i][0] = 'P';
        tabuleiro[1][i][1] = 'P';
        tabuleiro[1][i][2] = '1' + i;
    }

    // Colocar as peças brancas
    tabuleiro[7][0][0] = 'B'; tabuleiro[7][0][1] = 'T'; tabuleiro[7][0][2] = '1';
    tabuleiro[7][1][0] = 'B'; tabuleiro[7][1][1] = 'C'; tabuleiro[7][1][2] = '1';
    tabuleiro[7][2][0] = 'B'; tabuleiro[7][2][1] = 'B'; tabuleiro[7][2][2] = '1';
    tabuleiro[7][3][0] = 'B'; tabuleiro[7][3][1] = 'D'; tabuleiro[7][3][2] = ' ';
    tabuleiro[7][4][0] = 'B'; tabuleiro[7][4][1] = 'R'; tabuleiro[7][4][2] = ' ';
    tabuleiro[7][5][0] = 'B'; tabuleiro[7][5][1] = 'B'; tabuleiro[7][5][2] = '2';
    tabuleiro[7][6][0] = 'B'; tabuleiro[7][6][1] = 'C'; tabuleiro[7][6][2] = '2';
    tabuleiro[7][7][0] = 'B'; tabuleiro[7][7][1] = 'T'; tabuleiro[7][7][2] = '2';

    // Colocar peões brancos
    for (int i = 0; i < 8; i++) {
        tabuleiro[6][i][0] = 'B';
        tabuleiro[6][i][1] = 'P';
        tabuleiro[6][i][2] = '1' + i;
    }

    // Espaços vazios
    for (int i = 2; i < 6; i++) {
        for (int j = 0; j < 8; j++) {
            tabuleiro[i][j][0] = 'X';
            tabuleiro[i][j][1] = ' ';
            tabuleiro[i][j][2] = ' ';
        }
    }
}

void exibirTabuleiro(char tabuleiro[8][8][4]) {
    char colunas[] = "abcdefgh";
    printf("  ");
    for (int i = 0; i < 8; i++) {
        printf("  %c ", colunas[i]);
    }
    printf("\n");

    for (int i = 0; i < 8; i++) {
        printf("%d ", 8 - i);
        for (int j = 0; j < 8; j++) {
            printf("|%c%c%c", tabuleiro[i][j][0], tabuleiro[i][j][1], tabuleiro[i][j][2]);
        }
        printf("|\n");
    }
}

int main() {
    char tabuleiro[8][8][4];
    inicializarTabuleiro(tabuleiro);
    exibirTabuleiro(tabuleiro);

    return 0;
}