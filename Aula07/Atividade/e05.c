#include <stdio.h>

int main(){
    int n = 1, aux, sequencia = 1, maiorSequencia = 1;

    scanf("%d", &aux);

    while (n > 0){
        scanf("%d", &n);

        if (n > aux)
            sequencia++;
        else if (n > 0)
            sequencia = 1;

        if (sequencia > maiorSequencia)
            maiorSequencia = sequencia;

        aux = n;
    }

    printf("%d", maiorSequencia);

    return 0;
}