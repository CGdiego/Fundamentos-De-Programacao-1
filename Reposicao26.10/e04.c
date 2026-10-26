#include <stdio.h>

int main(){
    int i, j, N, V[1000], quantAlunos = 0, foiContado;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
        scanf("%d", &V[i]);

    for (i = 0; i < N; i++){
        foiContado = 0;

        for (j = 0; j < i; j++){
            if (V[i] == V[j]){
                foiContado = 1;
                break;
            }
        }

        if (!foiContado)
            quantAlunos++;
    }

    printf("%d\n", quantAlunos);

    return 0;
}
