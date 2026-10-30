#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(){
    int remover, i, vetor[N], posicao = N, valido = 1;

    for (i = 0; i < N; i++)
        vetor[i] = rand() % 11;

    for (i = 0; i < posicao; i++)
        printf("%d ", vetor[i]);
    printf("\n");

    scanf("%d", &remover);
    posicao--;
    if (remover < 0 || remover > posicao)
        valido = 0;

    while (valido && posicao){
        for (i = remover; i < posicao; i++)
            vetor[i] = vetor[i + 1];

        for (i = 0; i < posicao; i++)
            printf("%d ", vetor[i]);
        printf("\n");

        scanf("%d", &remover);
        posicao--;
        if (remover < 0 || remover > posicao)
            valido = 0;
    }

    return 0;
}