#include <stdio.h>
#define N_LINHAS 3
#define N_COLUNAS 5

int main() {
    int i, j, flagfim = 0, conta = 0, posX = 0, posY = 0;

    char mapa[N_LINHAS][N_COLUNAS] = {{"HHHH"}, {"H..."}, {"o.HH"}};

    for (i = 0; i < N_LINHAS; i++) {
        for (j = 0; j < N_COLUNAS; j++) {
            if (mapa[i][j] == 'o') {
                posX = i;
                posY = j;
            }
        }
    }

    while (flagfim == 0) {
        conta = 0;

        if (posX - 1 >= 0 && mapa[posX - 1][posY] == 'H')
            conta += 1;
        if (posX + 1 < N_LINHAS && mapa[posX + 1][posY] == 'H')
            conta += 1;
        if (posY - 1 >= 0 && mapa[posX][posY - 1] == 'H')
            conta += 1;
        if (posY + 1 < N_COLUNAS - 1 && mapa[posX][posY + 1] == 'H')
            conta += 1;

        if (conta == 0) {
            flagfim = 1;
        } else {
            mapa[posX][posY] = 'h';

            if (posX - 1 >= 0 && mapa[posX - 1][posY] == 'H') {
                posX = posX - 1;
            }

            else if (posX + 1 < N_LINHAS && mapa[posX + 1][posY] == 'H') {
                posX = posX + 1;
            }

            else if (posY - 1 >= 0 && mapa[posX][posY - 1] == 'H') {
                posY = posY - 1;
            }

            else if (posY + 1 < N_COLUNAS - 1 && mapa[posX][posY + 1] == 'H') {
                posY = posY + 1;
            }
        }
    }

    for (i = 0; i < N_LINHAS; i++) { /*não fala que precisa imprimir o mapa dnv, mas acho que tanto faz,
                                        só meio ruim pq ele imprime com os h´s minúsculos...*/
        printf("%s\n", mapa[i]);
    }

    printf("%d %d\n", posX + 1, posY + 1);

    return 0;
}
