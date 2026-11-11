#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_LINHAS 3
#define N_COLUNAS 4

int main(){
    int i, j, lin, col, matriz[N_LINHAS][N_COLUNAS], soma_lin, soma_col, soma;

    srand(time (NULL));

    // Preenche a matriz
    for (i = 0; i < N_LINHAS; i++)
        for (j = 0; j < N_COLUNAS; j++)
            matriz[i][j] = rand() % 21;

    // Imprime
    printf("A:\n");
    for (i = 0; i < N_LINHAS; i++){
        for (j = 0; j < N_COLUNAS; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }
    printf("\n");

    // Lê lin e col
    printf("Informe uma linha entre 0 e %d: ", N_LINHAS-1);
    scanf("%d", &lin);
    printf("Informe uma coluna entre 0 e %d: ", N_COLUNAS-1);
    scanf("%d", &col);

    // Calcula a soma no lin
    soma_lin = 0;
    for (j = 0; j < N_COLUNAS; j++)
        soma_lin += matriz[lin][j];

    // Calcula a soma no col
    soma_col = 0;
    for (i = 0; i < N_LINHAS; i++)
        soma_col += matriz[i][col];

    // [lin][col] foi contado duas vezes
    soma = soma_lin + soma_col - matriz[lin][col];
    printf("\nSoma: %d\n", soma);

    return 0;
}
