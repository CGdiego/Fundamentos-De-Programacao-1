#include <stdio.h>
#include <stdlib.h>
#define N 100

int ordemCrescente(int *v, int tamanho);

int main(){
    int vetor[N], tamanho = 5, i;
    
    for (i = 0; i < tamanho; i++){
        vetor[i] = rand() % 11;
        printf("%d ", vetor[i]);
    }

    printf("\n");

    if (ordemCrescente(vetor, tamanho))
        printf("Crescente.\n");
    else
        printf("Nao eh crescente.\n");

    return 0;
}

int ordemCrescente(int *v, int tamanho){
    int i;

    for (i = 1; i < tamanho; i++){
        if (v[i] <= v[i - 1])
            return 0;
    }

    return 1;
}