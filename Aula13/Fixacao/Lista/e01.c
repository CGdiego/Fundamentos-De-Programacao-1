#include <stdio.h>

int main(){
    int vetor[10], i;

    for (i = 0; i < 10; i++)
        vetor[i] = i;

    for (i = 0; i < 10; i++)
        printf("%d ", vetor[i]);

    return 0;
}