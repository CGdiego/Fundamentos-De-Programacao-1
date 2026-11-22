#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int numero;
    char* nome;
    char* email;
    char* endereco;
    int** prova;
    float nota;
} Candidato;

void corrigeProva (Candidato* c, int** gabarito, int n_questoes, int n_itens){
    int i, j, acertos, erros;
    float peso_por_item = 100.0 / (n_questoes * n_itens);

    c->nota = 0;

    for (i = 0; i < n_questoes; i++){
        acertos = 0;
        erros = 0;

        for (j = 0; j < n_itens; j++)
            if (c->prova[i][j] == 0 || c->prova[i][j] == 1){
                if (c->prova[i][j] == gabarito[i][j])
                    acertos++;
                else
                    erros++;
            }

        if (erros < acertos)
            c->nota += peso_por_item * (acertos - erros);
    }
}

int main(){
    int i, j, n_questoes = 4, n_itens = 5, **gabarito;
    int resp_gab[4][5] = {
        {1, 0, 1, 1, 0},
        {0, 1, 0, 1, 1},
        {1, 1, 0, 0, 1},
        {0, 0, 1, 0, 1}
    };
    int resp_cand[4][5] = {
        {1, 0, 1, 1, 0},
        {0, 1, 0, -1, -1},
        {1, 1, 0, -1, 0},
        {0, 0, 0, 1, 0}
    };
    Candidato c;

    gabarito = (int**) malloc(n_questoes * sizeof(int*));
    c.prova = (int**) malloc(n_questoes * sizeof(int*));

    for (i = 0; i < n_questoes; i++){
        gabarito[i] = (int*) malloc(n_itens * sizeof(int));
        c.prova[i] = (int*) malloc(n_itens * sizeof(int));

        for (j = 0; j < n_itens; j++){
            gabarito[i][j] = resp_gab[i][j];
            c.prova[i][j] = resp_cand[i][j];
        }
    }

    corrigeProva(&c, gabarito, n_questoes, n_itens);
    printf("Nota final: %.2f\n", c.nota);

    for (i = 0; i < n_questoes; i++){
        free(gabarito[i]);
        free(c.prova[i]);
    }
    free(gabarito);
    free(c.prova);

    return 0;
}