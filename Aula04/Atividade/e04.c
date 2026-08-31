#include <stdio.h>

int main(){
    int valor, cem, cinquenta, vinte, dez, cinco, dois, um;

    scanf("%d", &valor);

    printf("R$ %d = ", valor);

    cem = valor/100; valor %= 100;
    cinquenta = valor/50; valor %= 50;
    vinte = valor/20; valor %= 20;
    dez = valor/10; valor %= 10;
    cinco = valor/5; valor %= 5;
    dois = valor/2; valor %= 2;
    um = valor;

    printf("%d cedula(s) de 100, %d cedula(s) de 50, %d cedula(s) de 20, %d cedula(s) de 10, %d cedula(s) de 5, %d cedula(s) de 2, %d cedula(s) de 1.", cem, cinquenta, vinte, dez, cinco, dois, um);

    return 0;
}