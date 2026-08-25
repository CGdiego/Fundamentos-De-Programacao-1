#include <stdio.h>

int main(){
    int veloMax, veloMot;

    scanf("%d %d", &veloMax, &veloMot);

    if (veloMot <= veloMax)
        printf("Não há multa.");
    else
        printf("Você precisa pagar uma multa de %d reais.", (veloMot - veloMax) * 50);

    return 0;
}