#include <stdio.h>

typedef struct {
    float menor;
    float maior;
    float meio;
} MaMeMe;

MaMeMe classifica(float n1, float n2, float n3);

int main(){
    float n1 = 3, n2 = 1, n3 = 2;
    MaMeMe mameme;

    mameme = classifica(n1, n2, n3);

    printf("%.2f ", mameme.menor);
    printf("%.2f ", mameme.meio);
    printf("%.2f", mameme.maior);

    return 0;
}

MaMeMe classifica(float n1, float n2, float n3){
    MaMeMe mameme_auxiliar;
    float aux;

    if (n1 > n2){
        aux = n1;
        n1 = n2;
        n2 = aux;
    }

    if (n1 > n3){
        aux = n1;
        n1 = n3;
        n3 = aux;
    }

    if (n2 > n3){
        aux = n2;
        n2 = n3;
        n3 = aux;
    }

    mameme_auxiliar.menor = n1;
    mameme_auxiliar.meio = n2;
    mameme_auxiliar.maior = n3;

    return mameme_auxiliar;
}
