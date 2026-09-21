#include <stdio.h>
#define N 5

int main(){
    int i, j, soma = 0, ehprimo = 1, primos = 0;

    for (i = 2; primos < N; i++){

        ehprimo = 1;
        for (j = 2; j < i; j++){
            if (i % j == 0){
                ehprimo = 0;
                break;
            }
        }

        if (ehprimo){
            soma += i;
            primos++;
        }

    }

    printf("%d", soma);

    return 0;
}