#include <stdio.h>

int main(){
    int n, i, ganhador = 0, nAtual;

    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        scanf("%d", &nAtual);

        if (i == nAtual)
            ganhador = i;
    }

    printf("%d", ganhador);

    return 0;
}