#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(){
    int i, v[N], soma = 0, maiores = 0, menores = 0;
    float media;

    for (i = 0; i < N; i++){
        v[i] = rand() % 61 + 20;
        soma += v[i];
    }

    media = (float) soma / N;
    printf("%f\n", media);

    for (i = 0; i < N; i++){
        if (v[i] > media){
            printf("%d eh maior que a media.\n", v[i]);
            maiores++;
        }
        else if (v[i] < media){
            printf("%d eh menor que a media.\n", v[i]);
            menores++;
        }
        else{
            printf("%d eh igual a media.\n", v[i]);
        }
    }

    printf("%d sao maiores e %d sao menores.\n", maiores, menores);

    return 0;
}