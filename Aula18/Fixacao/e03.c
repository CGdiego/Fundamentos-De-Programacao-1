#include <stdio.h>
#define N 5

int ehQuadrada(char matriz[N][N]);

int main(){
    int i, j;

    char matriz[N][N] = {
        {'S', 'A', 'T', 'O', 'R'},
        {'A', 'R', 'E', 'P', 'O'},
        {'T', 'E', 'N', 'E', 'T'},
        {'O', 'P', 'E', 'R', 'A'},
        {'R', 'O', 'T', 'A', 'S'}
    };

    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++)
            printf("%c ", matriz[i][j]);
        printf("\n");
    }

    if (ehQuadrada(matriz))
        printf("\nAtende aos requisitos!\n");
    else
        printf("\nNao atende aos requisitos.\n");

    return 0;
}

int ehQuadrada(char matriz[N][N]){
    int i, j;

    for (i = 0; i < N; i++){
        for (j = i; j < N - i; j++){
            if (matriz[i][j] != matriz[N - 1 - i][N - 1 - j])
                return 0;

            if (matriz[i][j] != matriz[j][i])
                return 0;
        }
    }

    return 1;
}
