#ifndef MAQUINA_H
#define MAQUINA_H

#include <stdio.h>

#define LARGURA_FAIXA 6

static inline void pontoRolo1(void)
{
    printf("v");
}

static inline void pontoRolo2(void)
{
    printf("a");
}

static inline void moveAgulha(void)
{
    printf(" ");
}

static inline void rolaTecido(void)
{
    printf("\n");
}

#endif