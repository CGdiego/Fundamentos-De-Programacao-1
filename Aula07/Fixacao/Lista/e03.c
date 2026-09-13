#include <stdio.h>

int main(){
    int min, max, lido = 0, minLido, maxLido, quant = 0;

    scanf("%d %d", &min, &max);

    minLido = max;
    maxLido = min;

    while (lido >= 0){
        scanf("%d", &lido);
        
        if (lido >= min && lido <= max){
            quant += 1;
            if (lido > maxLido)
                maxLido = lido;
            if (lido < minLido)
                minLido = lido;
        }
    }

    if (quant > 0) {
        printf("%d %d %d\n", quant, minLido, maxLido);
    } else {
        printf("Nenhum valor fornecido na faixa.\n");
    }

    return 0;
}