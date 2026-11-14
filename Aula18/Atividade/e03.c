#include <stdio.h>

#define N_AEROPORTOS 6
#define N_VOOS 5

void preencheAdjacencia(int voos[N_VOOS][2], int adj[N_AEROPORTOS][N_AEROPORTOS]){
    int i, j, a1, a2;

    for (i = 0; i < N_AEROPORTOS; i++)
        for (j = 0; j < N_AEROPORTOS; j++)
            adj[i][j] = 0;

    for (i = 0; i < N_VOOS; i++){
        a1 = voos[i][0];
        a2 = voos[i][1];
        adj[a1][a2] = 1;
        adj[a2][a1] = 1;
    }
}

int aeroportoMaisMovimentado(int adj[N_AEROPORTOS][N_AEROPORTOS]){
    int i, j, soma, maiorSoma = -1, maisMovimentado = 0;

    for (i = 0; i < N_AEROPORTOS; i++){
        soma = 0;

        for (j = 0; j < N_AEROPORTOS; j++)
            soma += adj[i][j];

        if (soma > maiorSoma){
            maiorSoma = soma;
            maisMovimentado = i;
        }
    }

    return maisMovimentado;
}

void copiaMatriz(int origem[N_AEROPORTOS][N_AEROPORTOS], int destino[N_AEROPORTOS][N_AEROPORTOS]){
    int i, j;

    for (i = 0; i < N_AEROPORTOS; i++)
        for (j = 0; j < N_AEROPORTOS; j++)
            destino[i][j] = origem[i][j];
}

void multiplicaMatrizes(int a[N_AEROPORTOS][N_AEROPORTOS],
                        int b[N_AEROPORTOS][N_AEROPORTOS],
                        int res[N_AEROPORTOS][N_AEROPORTOS]){
    int temp[N_AEROPORTOS][N_AEROPORTOS];
    int i, j, k;

    for (i = 0; i < N_AEROPORTOS; i++)
        for (j = 0; j < N_AEROPORTOS; j++){
            temp[i][j] = 0;

            for (k = 0; k < N_AEROPORTOS; k++)
                temp[i][j] += a[i][k] * b[k][j];
        }

    copiaMatriz(temp, res);
}

void mostraMatriz(int m[N_AEROPORTOS][N_AEROPORTOS]){
    int i, j;

    for (i = 0; i < N_AEROPORTOS; i++){
        for (j = 0; j < N_AEROPORTOS; j++)
            printf("%3d", m[i][j]);
        printf("\n");
    }
}

int main(){
    int voos[N_VOOS][2] = {{0, 3}, {1, 3}, {2, 3}, {4, 3}, {4, 5}};
    int adj[N_AEROPORTOS][N_AEROPORTOS];
    int potencia[N_AEROPORTOS][N_AEROPORTOS];
    int opcao, origem, destino, nConexoes, p, encontrados;

    preencheAdjacencia(voos, adj);

    printf("Matriz de Adjacencia:\n");
    mostraMatriz(adj);
    printf("\nAeroporto com maior numero de voos: %d\n\n", aeroportoMaisMovimentado(adj));

    printf("Informe o aeroporto de origem (0 a %d): ", N_AEROPORTOS - 1);
    scanf("%d", &origem);
    printf("Informe o aeroporto de destino (0 a %d): ", N_AEROPORTOS - 1);
    scanf("%d", &destino);

    printf("\nEscolha o tipo de busca:\n");
    printf("1 - Sem conexoes (voo direto)\n");
    printf("2 - Com exatamente N conexoes\n");
    printf("3 - Com ate N conexoes\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1){
        if (adj[origem][destino] > 0)
            printf("Existe voo direto entre %d e %d.\n", origem, destino);
        else
            printf("Nao existe voo direto entre %d e %d.\n", origem, destino);
    }
    else if (opcao == 2 || opcao == 3) {
        printf("Informe o numero N de conexoes (escalas): ");
        scanf("%d", &nConexoes);

        copiaMatriz(adj, potencia);

        if (opcao == 2){
            for (p = 1; p <= nConexoes; p++)
                multiplicaMatrizes(potencia, adj, potencia);

            if (potencia[origem][destino] > 0)
                printf("Existem %d trajeto(s) com exatamente %d conexao(oes).\n", potencia[origem][destino], nConexoes);
            else
                printf("Nao existem trajetos com exatamente %d conexao(oes).\n", nConexoes);
        }
        else{
            encontrados = 0;
            for (p = 0; p <= nConexoes; p++){
                if (p > 0)
                    multiplicaMatrizes(potencia, adj, potencia);

                encontrados += potencia[origem][destino];
            }
            if (encontrados > 0)
                printf("Existem %d trajeto(s) com ate %d conexao(oes).\n", encontrados, nConexoes);
            else
                printf("Nao existem trajetos com ate %d conexao(oes).\n", nConexoes);
        }
    }

    return 0;
}