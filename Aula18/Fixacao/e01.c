#include <stdio.h>
#define N 3

int ehSimetrica (int matriz [N][N]);

int main ()
{
    int i, j;
    int matriz [N][N];

    /* Lê */
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf ("Elemento em (%d, %d): ", i, j);
            scanf ("%d", &(matriz [i][j]));
        }
    }

    if (ehSimetrica (matriz))
        printf ("Simetrica!\n");
    else
        printf ("Nao eh simetrica!\n");
    return (0);
}

int ehSimetrica (int matriz [N][N]){
    int i, j, eh_simetrica = 1;
    
    for (i = 0; i < N - 1 && eh_simetrica; i++){
        for (j = i + 1; j < N && eh_simetrica; j++){
            if (matriz[i][j] != matriz[j][i])
                eh_simetrica = 0;
        }
    }

    return eh_simetrica;
}
