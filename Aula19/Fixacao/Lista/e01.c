#include <stdio.h>
#include <stdlib.h>

void imprimeMatriz(int** matriz, int nl, int nc){
    int i, j;

    for (i = 0; i < nl; i++){
        for (j = 0; j < nc; j++)
            printf("%5d", matriz[i][j]);
        printf("\n");
    }
}

int** geraTrianguloDePascal (int grau){
    int **matriz, i, j;

    matriz = (int **) malloc (grau * sizeof(int *));

    for (int i = 0; i < grau; i++)
        matriz[i] = (int *) malloc (grau * sizeof(int));

    for (i = 0; i < grau; i++)
        for (j = 0; j < grau; j++)
            matriz[i][j] = 0;

    matriz[0][0] = 1;

    for (i = 0; i < grau; i++){
        matriz[i][0] = 1;

        for (j = 1; j <= i; j++)
            matriz[i][j] = matriz[i - 1][j - 1] + matriz[i - 1][j];
    }

    return matriz;
}

int main(){
    int grau, **matriz;

    scanf("%d", &grau);

    matriz = geraTrianguloDePascal(grau);

    imprimeMatriz(matriz, grau, grau);

    return 0;
}