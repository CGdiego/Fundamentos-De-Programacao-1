#include <stdio.h>

int main() {
    int valor;

    scanf("%d", &valor);

    if (valor & 1 == 1)
        printf("Ímpar.");
    else
        printf("Par.");

    return 0;
}