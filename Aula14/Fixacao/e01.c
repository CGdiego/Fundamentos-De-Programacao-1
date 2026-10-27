#include <stdio.h>
#include <stdlib.h>
#define N 10

int buscaVetor (int* vetor, int n, int procurado);

int main(){
    int vetor[N], valor, i;
    
    for (i = 0; i < N; i++)
        vetor[i] = rand() % 11;

    scanf("%d", &valor);

    printf("%d", buscaVetor(vetor, N, valor));

    return 0;
}

int buscaVetor (int* vetor, int n, int procurado){
    int i;

    for (i = 0; i < n; i++){
        if (vetor[i] == procurado)
            return i;
    }

    return -1;
}