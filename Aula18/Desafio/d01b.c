#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define N_LINHAS 3
#define N_COLUNAS 4

typedef struct {
    int linha;
    int coluna;
} Coordenada;

static bool posicao_valida(int linha, int coluna) {
    return linha >= 0 && linha < N_LINHAS && coluna >= 0 && coluna < N_COLUNAS;
}

static bool encontrar_inicio(const char mapa[N_LINHAS][N_COLUNAS + 1], Coordenada *inicio) {
    for (int i = 0; i < N_LINHAS; i++) {
        for (int j = 0; j < N_COLUNAS; j++) {
            if (mapa[i][j] == 'o') {
                inicio->linha = i;
                inicio->coluna = j;
                return true;
            }
        }
    }
    return false;
}

static Coordenada rastrear_destino(const char mapa[N_LINHAS][N_COLUNAS + 1], Coordenada inicio) {
    /* Ordem de busca: cima, baixo, esquerda, direita */
    static const int d_linha[4] = {-1, 1, 0, 0};
    static const int d_coluna[4] = {0, 0, -1, 1};

    bool visitado[N_LINHAS][N_COLUNAS] = {false};
    Coordenada atual = inicio;
    visitado[atual.linha][atual.coluna] = true;

    while (true) {
        bool avancou = false;

        for (int dir = 0; dir < 4; dir++) {
            int prox_linha = atual.linha + d_linha[dir];
            int prox_coluna = atual.coluna + d_coluna[dir];

            if (posicao_valida(prox_linha, prox_coluna) &&
                !visitado[prox_linha][prox_coluna] &&
                mapa[prox_linha][prox_coluna] == 'H') {
                atual.linha = prox_linha;
                atual.coluna = prox_coluna;
                visitado[atual.linha][atual.coluna] = true;
                avancou = true;
                break;
            }
        }

        if (!avancou) {
            break;
        }
    }

    return atual;
}

static void imprimir_mapa(const char mapa[N_LINHAS][N_COLUNAS + 1]) {
    for (int i = 0; i < N_LINHAS; i++) {
        printf("%s\n", mapa[i]);
    }
}

int main(void) {
    const char mapa[N_LINHAS][N_COLUNAS + 1] = {
        "HHHH",
        "H...",
        "o.HH"
    };

    Coordenada inicio;
    if (!encontrar_inicio(mapa, &inicio)) {
        fprintf(stderr, "Erro: posicao inicial 'o' nao encontrada no mapa.\n");
        return EXIT_FAILURE;
    }

    Coordenada destino = rastrear_destino(mapa, inicio);

    imprimir_mapa(mapa);
    printf("%d %d\n", destino.linha + 1, destino.coluna + 1);

    return EXIT_SUCCESS;
}