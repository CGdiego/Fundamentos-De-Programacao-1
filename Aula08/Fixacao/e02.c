#include <stdio.h>

int main(){
    int primeiroApostado, segundoApostado, primeiroReal, segundoReal, pontos = 0;

    printf("Placar apostado (AxB): ");
    scanf("%dx%d", &primeiroApostado, &segundoApostado);

    printf("Placar real (AxB): ");
    scanf("%dx%d", &primeiroReal, &segundoReal);

    if ((primeiroApostado > segundoApostado) && (primeiroReal > segundoReal) || (primeiroApostado < segundoApostado) && (primeiroReal < segundoReal) || (primeiroApostado == segundoApostado) && (primeiroReal == segundoReal))
        pontos = 10;

    if (primeiroApostado == primeiroReal)
        pontos += 5;

    if (segundoApostado == segundoReal)
        pontos += 5;

    printf("A sua pontuacao é %d.", pontos);

    return 0;
}