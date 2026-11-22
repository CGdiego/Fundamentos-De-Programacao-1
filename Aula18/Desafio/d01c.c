#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_DIM 100

typedef struct {
    int linha;
    int coluna;
} Coordenada;

typedef struct {
    char grade[MAX_DIM + 2][MAX_DIM + 2];
} Mapa;

static Coordenada rastrear_destino(const Mapa *mapa, Coordenada inicio) {
    /* Deslocamentos ortogonais: cima, baixo, esquerda, direita */
    static const int d_linha[4] = {-1, 1, 0, 0};
    static const int d_coluna[4] = {0, 0, -1, 1};

    Coordenada anterior = {0, 0};
    Coordenada atual = inicio;

    while (true) {
        bool avancou = false;

        for (int dir = 0; dir < 4; dir++) {
            int prox_linha = atual.linha + d_linha[dir];
            int prox_coluna = atual.coluna + d_coluna[dir];

            if ((prox_linha != anterior.linha || prox_coluna != anterior.coluna) &&
                mapa->grade[prox_linha][prox_coluna] == 'H') {
                anterior = atual;
                atual.linha = prox_linha;
                atual.coluna = prox_coluna;
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

int main(void) {
    int num_linhas, num_colunas;
    if (scanf("%d %d", &num_linhas, &num_colunas) != 2 ||
        num_linhas < 2 || num_linhas > MAX_DIM ||
        num_colunas < 2 || num_colunas > MAX_DIM) {
        return EXIT_FAILURE;
    }

    /* Matriz com borda sentinela ('\0') e indexacao 1-based (1..L, 1..C) */
    Mapa mapa = {0};
    Coordenada inicio = {0, 0};

    for (int i = 1; i <= num_linhas; i++) {
        if (scanf(" %100s", &mapa.grade[i][1]) != 1) {
            return EXIT_FAILURE;
        }

        if (inicio.linha == 0) {
            for (int j = 1; j <= num_colunas; j++) {
                if (mapa.grade[i][j] == 'o') {
                    inicio.linha = i;
                    inicio.coluna = j;
                    break;
                }
            }
        }
    }

    if (inicio.linha == 0) {
        return EXIT_FAILURE;
    }

    Coordenada destino = rastrear_destino(&mapa, inicio);
    printf("%d %d\n", destino.linha, destino.coluna);

    return EXIT_SUCCESS;
}