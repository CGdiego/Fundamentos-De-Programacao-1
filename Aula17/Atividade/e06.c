#include <stdio.h>
#include <string.h>
#define N_LINHAS 12
#define N_COLUNAS 12
#define BUSCADA "CANETAAZUL"

int main(){
    char matriz[N_LINHAS][N_COLUNAS] = {"CANETAAZULEO",
                                        "RHHEEIOYHMBE",
                                        "RNRYSENTOKWS",
                                        "IAIMITCGWVSR",
                                        "NHRNAURHEABK",
                                        "RTARUHETTNAO",
                                        "LMDCPNHMSATE",
                                        "TSEGNNSDLSHA",
                                        "OTWYCNLIHHRF",
                                        "IDRENAOBELRC",
                                        "LTYETOTIFCEA",
                                        "OFKAARATWANP"};
    int i, j, encontradas, meta;
    
    meta = strlen(BUSCADA);
    
    for (i = 0; i < N_LINHAS; i++){
        for (j = 0; j < N_COLUNAS; j++){
            if (j + meta <= N_COLUNAS){
                for (encontradas = 0; encontradas < meta; encontradas++){
                    if (matriz[i][j + encontradas] != BUSCADA[encontradas])
                        break;
                }
                        
                if (encontradas == meta){
                    printf("%d %d\n", i, j);
                    return 0;
                }
            }
        }
    }
    
    printf("Nao encontrou a sequencia %s\n", BUSCADA);
    return 0;
}