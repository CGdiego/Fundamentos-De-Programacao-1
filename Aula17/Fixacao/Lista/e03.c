#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LINHA 2
#define COLUNA 3

int main(){
    int matriz[LINHA][COLUNA], matrizT[COLUNA][LINHA], i, j;

    srand(time(NULL));

    for (i = 0; i < LINHA; i++)
        for (j = 0; j < COLUNA; j++)
            matriz[i][j] = rand() % 20 + 1;

    for (i = 0; i < LINHA; i++)
        for (j = 0; j < COLUNA; j++)
            matrizT[j][i] = matriz[i][j];

    printf("=== MATRIZ A ===\n");
    for (i = 0; i < LINHA; i++){
        for (j = 0; j < COLUNA; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }
    printf("\n");

    printf("=== MATRIZ A TRANSPOSTA ===\n");
    for (i = 0; i < COLUNA; i++){
        for (j = 0; j < LINHA; j++)
            printf("%d ", matrizT[i][j]);
        printf("\n");
    }
    printf("\n");

    return 0;
}