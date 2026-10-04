#include "maquina.h"

void main ()
{
    int n_pontos = 1, usa_rolo1 = 0;

    while (1)
    {
        int i;

        for (i = 0; i < n_pontos; i++)
        {
            if (usa_rolo1)
                pontoRolo1 ();
            else
                pontoRolo2 ();
        }

        n_pontos++;
        if (n_pontos > LARGURA_FAIXA)
        {
            n_pontos = 1;
            usa_rolo1 = !usa_rolo1;
        }

        rolaTecido ();
    }
}