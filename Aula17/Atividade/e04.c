#include <stdio.h>
#include <stdlib.h>
#define M 2
#define N 3

int main(){
    int matrizA[M][N], matrizB[N][M], matrizR[M][M], i, j, k, total;
    
    for (i = 0; i < M; i++){
        for (j = 0; j < N; j++){
            matrizA[i][j] = rand() % 11;
            matrizB[j][i] = rand() % 11;
        }
    }
    
    for (i = 0; i < M; i++){
        for (j = 0; j < M; j++){
            total = 0;
            
            for (k = 0; k < N; k++)
                total += matrizA[i][k] * matrizB[k][j];
                
            matrizR[i][j] = total;
            printf("%d ", matrizR[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}