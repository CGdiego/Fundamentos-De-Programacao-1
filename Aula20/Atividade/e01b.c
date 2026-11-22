#include <stdio.h>

typedef struct {
    float menor;
    float maior;
    float meio;
} MaMeMe;

void classifica(MaMeMe* valores);

int main(){
    MaMeMe mameme;

    mameme.menor = 3;
    mameme.meio = 1;
    mameme.maior = 2;

    classifica(&mameme);

    printf("%.2f ", mameme.menor);
    printf("%.2f ", mameme.meio);
    printf("%.2f", mameme.maior);

    return 0;
}

void classifica(MaMeMe* valores){
    float aux;

    if (valores->menor > valores->meio){
        aux = valores->menor;
        valores->menor = valores->meio;
        valores->meio = aux;
    }

    if (valores->menor > valores->maior){
        aux = valores->menor;
        valores->menor = valores->maior;
        valores->maior = aux;
    }

    if (valores->meio > valores->maior){
        aux = valores->meio;
        valores->meio = valores->maior;
        valores->maior = aux;
    }
}

