#include <stdio.h>
#define N_LINHAS 3
#define N_COLUNAS 4

int main(){
    int campo [N_LINHAS][N_COLUNAS] = {{81, 28, 240, 10},
                                       {40, 10, 100, 240},
                                       {20, 180, 110, 35}};
    
    int i, j, soma, maiorSoma = 0;
    
    for (i = 0; i < N_LINHAS; i++){
        soma = 0;
        
        for (j = 0; j < N_COLUNAS; j++)
            soma += campo[i][j];
            
        if (soma > maiorSoma)
            maiorSoma = soma;
    }
    
    for (i = 0; i < N_COLUNAS; i++){
        soma = 0;
        
        for (j = 0; j < N_LINHAS; j++)
            soma += campo[j][i];
            
        if (soma > maiorSoma)
            maiorSoma = soma;
    }
    
    printf("%d", maiorSoma);
    
    return 0;
}