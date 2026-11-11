#include <stdio.h>

void zeraVetor(int* vetor, int n){
    int i;
    for (i = 0; i < n; i++)
        vetor[i] = 0;
}

int main(){
    int i, j, block_row, block_col;
    int usados[10];
    int solucao_valida = 1;
    
    int resposta[9][9] = {{9, 5, 4, 8, 1, 6, 3, 7, 2},
                          {7, 8, 6, 2, 5, 3, 1, 4, 9},
                          {1, 2, 3, 7, 9, 4, 6, 5, 8},
                          {3, 1, 8, 9, 7, 2, 4, 6, 5},
                          {2, 7, 9, 4, 6, 5, 8, 1, 3},
                          {4, 6, 5, 3, 8, 1, 9, 2, 7},
                          {8, 4, 7, 1, 2, 9, 5, 3, 6},
                          {5, 3, 2, 6, 4, 8, 7, 9, 1},
                          {6, 9, 1, 5, 3, 7, 2, 8, 4}};
                          
    for (i = 0; i < 9 && solucao_valida; i++){
        for (j = 0; j < 9 && solucao_valida; j++){
            if (resposta[i][j] < 1 || resposta[i][j] > 9)
                solucao_valida = 0;
        }
    }
                
    for (i = 0; i < 9 && solucao_valida; i++){
        zeraVetor(usados, 10);
        for (j = 0; j < 9 && solucao_valida; j++){
            if (usados[resposta[i][j]] != 0)
                solucao_valida = 0;
            else
                usados[resposta[i][j]] = 1;
        }
    }
    
    for (j = 0; j < 9 && solucao_valida; j++){
        zeraVetor(usados, 10);
        for (i = 0; i < 9 && solucao_valida; i++){
            if (usados[resposta[i][j]] != 0)
                solucao_valida = 0;
            else
                usados[resposta[i][j]] = 1;
        }
    }
    
    for (block_row = 0; block_row < 3 && solucao_valida; block_row++){
        for (block_col = 0; block_col < 3 && solucao_valida; block_col++){
            zeraVetor(usados, 10);
            for (i = 0; i < 3 && solucao_valida; i++){
                for (j = 0; j < 3 && solucao_valida; j++){
                    if (usados[resposta[block_row * 3 + i][block_col * 3 + j]] != 0)
                        solucao_valida = 0;
                    else
                        usados[resposta[block_row * 3 + i][block_col * 3 + j]] = 1;
                }
            }
        }
    }
        
    if (!solucao_valida)  
        printf("Resposta invalida!\n");
    else
        printf("Resposta valida!\n");
        
    return 0;
}