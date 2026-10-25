#include <stdio.h>

int main(){
    int N, i, anterior, atual, proximo;

    scanf("%d", &N);

    scanf("%d %d", &atual, &proximo);

    printf("%d\n", atual + proximo);

    for (i = 1; i < N - 1; i++){
        anterior = atual;
        atual = proximo;
        scanf("%d", &proximo);

        printf("%d\n", anterior + atual + proximo);
    }

    printf("%d\n", atual + proximo);

    return 0;
}