#include <stdio.h>
#define PREMIO 1000000

int main(){
    int n, i, n_vezes, alcancado = -1, soma = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        scanf("%d", &n_vezes);

        soma += n_vezes;

        if (soma >= PREMIO && alcancado == -1)
            alcancado = i;
    }

    printf("%d", alcancado);

    return 0;
}