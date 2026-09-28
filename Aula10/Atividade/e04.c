#include <stdio.h>

unsigned long long potencia (unsigned int, unsigned int);

int main(){
    unsigned int base, expoente;

    scanf("%u %u", &base, &expoente);
    printf("%llu", potencia(base, expoente));

    return 0;
}

unsigned long long potencia (unsigned int base, unsigned int expoente){
    int i;
    unsigned long long resultado = 1;

    for (i = 0; i < expoente; i++){
        resultado *= base;
    }

    return resultado;
}