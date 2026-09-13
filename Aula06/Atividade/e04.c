#include <stdio.h>

int main(){
    int i, n, soma = 0;

    scanf("%d", &n);

    for (i = n - 1; i >= 1; i--){
        if (n % i == 0)
            soma += i;
    }

    if (n == soma)
        printf("Eh perfeito!");
    else
        printf("Nao eh perfeito.");

    return 0;
}