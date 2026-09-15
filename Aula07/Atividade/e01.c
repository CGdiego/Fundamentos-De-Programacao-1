#include <stdio.h>

int main(){
    int n, i, fatorial;

    scanf("%d", &n);

    fatorial = n;

    for(i = n-1; i > 1; i--)
        fatorial *= i;

    printf("%d", fatorial);

    return 0;
}