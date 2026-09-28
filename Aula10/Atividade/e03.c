#include <stdio.h>

int proxFibonacci(int);

int main(){
    int n;

    scanf("%d", &n);
    printf("%d", proxFibonacci(n));

    return 0;
}

int proxFibonacci(int n){
    int valor1 = 0, valor2 = 1, i = 0;
    while (i < n){
        i = valor1 + valor2;
        valor2 = valor1;
        valor1 = i;
    }

    return i;
}