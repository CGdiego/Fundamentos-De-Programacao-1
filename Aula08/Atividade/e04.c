#include <stdio.h>

int main(){
    int i, n, anterior, atual, proximo, doisPicos = 0;

    scanf("%d", &n);

    scanf("%d", &anterior);
    scanf("%d", &atual);
    for (i = 0; i < n - 2; i++){
        scanf("%d", &proximo);

        if (anterior > atual && proximo > atual)
            doisPicos = 1;

        anterior = atual;
        atual = proximo;
    }

    if (doisPicos)
        printf("N");
    else
        printf("S");

    return 0;
}