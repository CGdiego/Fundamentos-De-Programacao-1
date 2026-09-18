#include <stdio.h>

int main(){
    int i, n, n_ant, n_atual, sequencia = 1, maiorSequencia = 0;

    scanf("%d", &n);

    scanf("%d", &n_ant);
    for (i = 1; i < n; i++){
        scanf("%d", &n_atual);

        if (n_atual == n_ant){
            sequencia += 1;
            if (sequencia > maiorSequencia)
                maiorSequencia = sequencia;
        }
        else
            sequencia = 1;

        n_ant = n_atual;
    }

    printf("%d", maiorSequencia);

    return 0;
}