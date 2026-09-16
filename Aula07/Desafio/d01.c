#include <stdio.h>
#define N 100

int main(){
    int i, chute = N / 2, achou = 0, resposta, max = N, min = 0;
    
    printf("Pense em um numero de 0 a %d.\n\n", N);

    for (i = 0; achou == 0; i++){
        printf("Meu chute eh %d. Esta correto? (1 - Menor, 2 - Igual, 3 - Maior)\n", chute);
        scanf("%d", &resposta);

        if (resposta == 1){
            max = chute - 1;
            chute = (min + max) / 2;
        }
        else if (resposta == 2)
            achou = 1;
        else{
            min = chute + 1;
            chute = (min + max) / 2;
        }
    }

    printf("Eu usei %d palpites ateh acertar.", i);

    return 0;
}