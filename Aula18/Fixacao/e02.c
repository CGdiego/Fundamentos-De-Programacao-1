#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N_LINHAS 2
#define N_COLUNAS 2

int temRepeticao(int matriz[N_LINHAS][N_COLUNAS]);

int main ()
{
    int i, j;
    int matriz [N_LINHAS][N_COLUNAS];

    srand (time (NULL));

    /* Preenche */
    for (i = 0; i < N_LINHAS; i++)
        for (j = 0; j < N_COLUNAS; j++)
            matriz [i][j] = rand () % 100;

    /* Imprime */
    for (i = 0; i < N_LINHAS; i++)
    {
        for (j = 0; j < N_COLUNAS; j++)
            printf ("%d\t", matriz [i][j]);
        printf ("\n");
    }

    /* Testa */
    if (temRepeticao (matriz))
        printf ("Tem elementos repetidos.");
    else
        printf ("Nao tem elementos repetidos.");

    return (0);
}

int temRepeticao(int matriz[N_LINHAS][N_COLUNAS]){
    int i, j, k, repetido = 0, vistos[N_LINHAS * N_COLUNAS], atual, total_vistos = 0;

    for (i = 0; i < N_LINHAS && !repetido; i++){
        for (j = 0; j < N_COLUNAS && !repetido; j++){
            atual = matriz[i][j];

            for (k = 0; k < total_vistos && !repetido; k++){
                if (vistos[k] == atual)
                    repetido = 1;
            }

            // Se não repetiu, guarda no vetor e aumenta o contador
            if (!repetido){
                vistos[total_vistos] = atual;
                total_vistos++;
            }
        }
    }

    return repetido;
}
