#include <stdio.h>

void removeExtremos (int *n, int *pri, int *ult)
{
    int tn, pot = 1;

    tn = *n;
    while(tn >= 10)
    {
        tn = tn/10;
        pot *= 10;
    }

    *pri = *n / pot;
    *ult = *n % 10;
    *n = *n % pot;
    *n = *n / 10;
}

int main(){
    int valor, primeiro, ultimo, palindromo = 1;

    scanf("%d", &valor);

    while (valor > 0){
        removeExtremos(&valor, &primeiro, &ultimo);

        if (primeiro != ultimo)
            palindromo = 0;
    }

    if (palindromo)
        printf("Eh palindromo.");
    else
        printf("Nao eh palindromo.");

    return 0;
}