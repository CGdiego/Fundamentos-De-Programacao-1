#include "maquina.h"

void main ()
{
    int i;

    /* Funciona até desligar ou o tecido acabar. */
    while (1)
    {
        for (i = 0; i < LARGURA_FAIXA; i++)
        {
            if (i == 1)
                pontoRolo1 ();
            else if (i == LARGURA_FAIXA-2)
                pontoRolo2 ();
            else
                moveAgulha ();
        }
        
        rolaTecido ();
    }
}