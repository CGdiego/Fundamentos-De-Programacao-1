#include <stdio.h>

unsigned int inverteNum (unsigned int);

int main(){
    int numero;

    scanf("%d", &numero);
    printf("%d", inverteNum(numero));

    return 0;
}

unsigned int inverteNum (unsigned int n){
    int invertido;

    while (n != 0){
        invertido *= 10;
        invertido += n % 10;
        n /= 10;
    }

    return invertido;
}