#include <stdio.h>
#define N 10

int main(){
    int i, valor, soma = 0, cont = 0;
    float media;

    for (i = 0; i < N; i++){
        scanf("%d", &valor);

        if (valor < 20){
            soma += valor;
            cont++;
        }
    }

    media = (float) soma / cont;
    printf("%f\n", media);

    return 0;
}