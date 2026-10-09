#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main(){
    int vetor[N], i;

    srand(time(0));

    for (i = 0; i < N; i++)
        vetor[i] = rand() % N;

    for (i = 0; i < N; i++){
        if (i == vetor[i])
            printf("%d ", i);
    }

    return 0;
}