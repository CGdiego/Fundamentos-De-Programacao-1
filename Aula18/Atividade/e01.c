#include <stdio.h>
#define N 15

void geraMatriz (int matriz [N] [N]) {

    int i = 0, j, soma = 1, var;

    for (var = 0; soma < N * N; var++) {

        for(j = var; j < N - var; j++)
            matriz [i] [j] = soma++;

        j--;

        for(i = var + 1; i < N - var; i++)
            matriz [i] [j] = soma++;

        i--;

        for(j = N-1-1 - var; j >= var; j--)
            matriz [i] [j] = soma++;

        j++;

        for(i = N-1-1 - var; i > var; i--)
            matriz [i] [j] = soma++;

        i++;
    }

    if(N % 2 == 1) {
        j++;
        matriz [i] [j] = soma++;
    }

}

int main () {

    int i, j, matriz [N] [N];

    geraMatriz (matriz);

    for (i = 0; i < N; i++) {

        for (j = 0; j < N; j++)
            printf("%5d", matriz [i] [j]);

        printf("\n");
    }

    return 0;
}
