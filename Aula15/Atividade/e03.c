#include <stdio.h>

int removeRepeticao(int *entrada, int tamanho, int *saida){
    int i, j, inseridos = 0, repetido;

    for (i = 0; i < tamanho; i++){
        repetido = 0;

        for (j = 0; j < inseridos; j++){
            if (entrada[i] == saida[j]){
                repetido = 1;
                break;
            }
        }

        if (!repetido){
            saida[inseridos] = entrada[i];
            inseridos++;
        }
    }

    return inseridos;
}

int main(){
    int v1[10] = {1, 2, 3, 6, 2, 1, 9, 0, 10, 2}, v2[10], tam = 10;

    printf("%d", removeRepeticao(v1, tam, v2));

    return 0;
}