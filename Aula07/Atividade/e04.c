#include <stdio.h>

int main(){
    long long n;
    int d, aux = 10, digitoPresente = 0;

    scanf("%lld %d", &n, &d);

    while (n > 0){
        if (d == n % 10)
            digitoPresente = 1;

        n /= aux;
    }

    if (digitoPresente)
        printf("O digito esta presente.");
    else
        printf("O digito nao esta presente.");

    return 0;
}