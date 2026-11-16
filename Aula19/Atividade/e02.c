#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100
#define LARGURA 4
#define ALTURA 3

int analisa (int*** in, int largura, int altura, int** out);
int avaliaDado (int* rolagens, int n);

int main(){
    int i, j, k, erro;
    int*** in;
    int** out;

    srand(time(NULL));

    in = (int***) malloc(ALTURA * sizeof(int**));
    out = (int**) malloc(ALTURA * sizeof(int*));

    for (i = 0; i < ALTURA; i++){
        in[i] = (int**) malloc(LARGURA * sizeof(int*));
        out[i] = (int*) malloc(LARGURA * sizeof(int));

        for (j = 0; j < LARGURA; j++){
            in[i][j] = (int*) malloc(N * sizeof(int));

            for (k = 0; k < N; k++)
                in[i][j][k] = (rand() % 6) + 1;
        }
    }

    erro = analisa(in, LARGURA, ALTURA, out);

    printf("Matriz de aprovacao (1 = aprovado, 0 = reprovado):\n");
    for (i = 0; i < ALTURA; i++){
        for (j = 0; j < LARGURA; j++)
            printf("%d ", out[i][j]);
        printf("\n");
    }

    printf("\nErro detectado: %d\n", erro);

    for (i = 0; i < ALTURA; i++){
        for (j = 0; j < LARGURA; j++)
            free(in[i][j]);
        free(in[i]);
        free(out[i]);
    }
    free(in);
    free(out);

    return 0;
}

int analisa (int*** in, int largura, int altura, int** out){
    int i, j, contadorReprovados, erro = 0;

    for (i = 0; i < altura; i++){
        contadorReprovados = 0;

        for (j = 0; j < largura; j++){
            out[i][j] = avaliaDado(in[i][j], N);

            if (!out[i][j])
                contadorReprovados++;
        }

        if (contadorReprovados >= largura / 2)
            erro = 1;
    }

    for (i = 0; i < largura; i++){
        contadorReprovados = 0;

        for (j = 0; j < altura; j++)
            if (!out[j][i])
                contadorReprovados++;

        if (contadorReprovados >= altura / 2)
            erro = 1;
    }

    return erro;
}

int avaliaDado(int* rolagens, int n){
    int contagem[6] = {0}, i;

    for (i = 0; i < n; i++)
        contagem[rolagens[i] - 1]++;

    for (i = 0; i < 6; i++)
        if (contagem[i] < 15 || contagem[i] > 18)
            return 0;

    return 1;
}