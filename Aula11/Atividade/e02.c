#include "maquina.h"

void main ()
{
    int i, n_pontos = 0;

    while (1)
    {
        for (i = 0; i < LARGURA_FAIXA; i++)
        {
            if (i < n_pontos)
                pontoRolo1 ();
            else
                pontoRolo2 ();
        }

        if (n_pontos >= LARGURA_FAIXA)
            n_pontos = 0;
        else
            n_pontos++;

        rolaTecido ();
    }
}