#include <stdio.h>
#include <stdlib.h>

int** criaMatriz(int nl, int nc){
    int ** teste;

    teste = (int **) malloc (nl * sizeof(int *));

    for (int i = 0; i < nl; i++)
        teste[i] = (int *) malloc (nc * sizeof(int));

    return teste;
}

void inicializaMatriz(int** matriz, int nl, int nc){
    int i, j;

    for (i = 0; i < nl; i++)
        for (j = 0; j < nc; j++)
            matriz[i][j] = rand() % 11;
}

void imprimeMatriz(int** matriz, int nl, int nc){
    int i, j;

    for (i = 0; i < nl; i++){
        for (j = 0; j < nc; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }
}

void limpaMatriz(int** matriz, int nl){
    int i;

    for (i = 0; i < nl; i++)
        free(matriz[i]);
    free(matriz);
}

int main(){
    int nl, nc, **matriz;

    scanf("%d %d", &nl, &nc);

    matriz = criaMatriz(nl, nc);

    inicializaMatriz(matriz, nl, nc);

    imprimeMatriz(matriz, nl, nc);

    limpaMatriz(matriz, nl);

    return 0;
}