#include <stdio.h>

int tamMaiorSeqNDec (int* val, int n, int* inicio, int* fim){
    if (n <= 0)
        return 0;

    int maxTam = 1, maxIni = 0, maxFim = 0;
    int currTam = 1, currIni = 0, i;

    for (i = 0; i < n; i++){
        if (val[i] >= val[i - 1]){
            currTam++;
        }
        else{
            currTam = 1;
            currIni = i;
        }

        if (currTam > maxTam){
            maxTam = currTam;
            maxIni = currIni;
            maxFim = 1;
        }
    }

    *inicio = maxIni;
    *fim = maxFim;

    return maxTam;
}

int main(){
    int vetor[12] = {1, 5, 6, 4, 9, 13, 13, 13, 55, 54, 40, 28};
    int inicio, fim;
    
    int tamanho_seq = tamMaiorSeqNDec(vetor, 12, &inicio, &fim);
    
    printf("Tamanho: %d\n", tamanho_seq);
    printf("Indice inicial: %d\n", inicio);
    printf("Indice final: %d\n", fim);
    
    return 0;
}