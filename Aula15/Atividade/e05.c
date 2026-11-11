#include <stdio.h>

int main(){
    int n, i, vidas, maxVidas = 0, maxAtual = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++){
        scanf("%d", &vidas);

        maxAtual += vidas;

        if (maxAtual < 0)
            maxAtual = 0;

        if (maxAtual > maxVidas)
            maxVidas = maxAtual;
    }

    printf("%d\n", maxVidas);

    return 0;
}