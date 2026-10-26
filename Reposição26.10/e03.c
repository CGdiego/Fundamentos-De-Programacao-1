#include <stdio.h>

int main(){
    int N, i, j, sequencia[1000], menorDistancia, distancia;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
        scanf("%d", &sequencia[i]);

    for (i = 0; i < N; i++){
        menorDistancia = 10000;

        for (j = 0; j < N; j++){
            if (sequencia[j] == 0){
                if (i > j)
                    distancia = i - j;
                else
                    distancia = j - i;

                if (distancia < menorDistancia)
                    menorDistancia = distancia;
            }
        }

        if (menorDistancia > 9)
            menorDistancia = 9;

        printf("%d ", menorDistancia);
    }

    return 0;
}
