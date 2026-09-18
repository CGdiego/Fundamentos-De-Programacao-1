#include <stdio.h>

int main(){
    int conta, i, n, nReverso = 0, nCopia;

    scanf("%d", &n);
    nCopia = n;

    for (i = 1; i < n; i++){
        conta = n % 10;
        n /= 10;
        nReverso += conta;
        nReverso *= 10;
    }

    nReverso += n;

    if (nCopia == nReverso)
        printf("Eh palindromo.");
    else
        printf("Nao eh palindromo.");

    return 0;
}