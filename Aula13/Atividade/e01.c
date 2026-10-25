#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(){
    float v[N], media, soma = 0, temp;
    int i, cont = 0;

    for (i = 0; i < N; i++){
        temp = ((float)rand() / RAND_MAX) * 80.0f - 40.0f;

        if (temp > 0){
            v[cont] = temp;
            soma += v[cont];
            cont++;
        }
    }

    media = soma / cont;
    printf("Media dos positivos: %f\n", media);

    for (i = 0; i < cont; i++){
        if (v[i] > media)
            printf("%f eh maior que a media.\n", v[i]);
        else if (v[i] < media)
            printf("%f eh menor que a media.\n", v[i]);
        else
            printf("%f eh igual a media.\n", v[i]);
    }

    return 0;
}