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
    
    int i, j, i2, j2, k, encontradas, meta;
    
    meta = strlen(BUSCADA);
    
    int offset_i[4] = {1, -1, 0, 0};
    int offset_j[4] = {0, 0, 1, -1};
    
    for (i = 0; i < N_LINHAS; i++){
        for (j = 0; j < N_COLUNAS; j++){
            for (k = 0; k < 4; k++){
                if ((offset_i[k] > 0 && i + meta > N_LINHAS) ||
                    (offset_i[k] < 0 && i - meta < -1) ||
                    (offset_j[k] > 0 && j + meta > N_COLUNAS) ||
                    (offset_j[k] < 0 && j - meta < -1))
                    continue;
                    
                for (encontradas = 0, i2 = i, j2 = j; encontradas < meta; encontradas++, i2 += offset_i[k], j2 += offset_j[k]){
                    if (matriz[i2][j2] != BUSCADA[encontradas])
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