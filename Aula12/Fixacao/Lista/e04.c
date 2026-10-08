#include <stdio.h>

float menorMaiorMedia(int n, float *menor, float *maior){
    int i;
    float soma, valor;

    scanf("%f", &valor);

    *maior = valor;
    *menor = valor;
    soma = valor;

    for (i = 0; i < n - 1; i++){
        scanf("%f", &valor);

        if (valor > *maior)
            *maior = valor;
        if (valor < *menor)
            *menor = valor;
        soma += valor;
    }

    return soma / n;
}

int main(){
    float min, max, media;

    media = menorMaiorMedia(10, &min, &max);

    printf("Menor: %f\n", min);
    printf("Maior: %f\n", max);
    printf("Media: %f\n", media);

    return 0;
}