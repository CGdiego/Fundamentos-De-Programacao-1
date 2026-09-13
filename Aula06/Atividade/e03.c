#include <stdio.h>
#define QUANT_JUIZ 6

int main(){
    int i, maior = 0, menor = 10, soma = 0, cont = 0;
    float nota;

    for (i = 0; i < QUANT_JUIZ; i++){
        scanf("%f", &nota);

        soma += nota;

        if (maior < nota)
            maior = nota;
        if (menor > nota)
            menor = nota;
    }

    printf("%f\n", (float) (soma - maior - menor) / 4);

    return 0;
}