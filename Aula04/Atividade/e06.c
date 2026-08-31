#include <stdio.h>

int main(){
    int resultado, c, d, u;

    printf("Digite um numero de tres digitos: ");
    scanf("%d", &resultado);

    c = resultado/100;
    d = (resultado%100)/10;
    u = resultado%10;

    resultado += u*100 + d*10 + c;

    if (resultado >= 1000)
        resultado %= 1000;

    c = resultado/100;
    d = (resultado%100)/10;
    u = resultado%10;

    resultado = c * 1 + d * 2 + u * 3;

    resultado %= 10;

    printf("O digito verificador eh %d.", resultado);

    return 0;
}