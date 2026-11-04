#include <stdio.h>
#include <stdlib.h>

int main(){
    int *v1, *v2, *v3, i, j, tam1, tam2, pos;

    printf("Tamanho do vetor 1: ");
    scanf("%d", &tam1);

    printf("Tamanho do vetor 2: ");
    scanf("%d", &tam2);

    v1 = (int*) malloc(tam1 * sizeof(int));
    v2 = (int*) malloc(tam2 * sizeof(int));

    for (i = 0; i < tam1; i++)
        v1[i] = rand() % 11;
        
    for (i = 0; i < tam2; i++)
        v2[i] = rand() % 11;

    v3 = (int*) malloc((tam1 * tam2) * sizeof(int));

    for (i = 0; i < tam1; i++){
        for (j = 0; j < tam2; j++){
            pos = i * tam2 + j;
            v3[pos] = v1[i] * v2[j];
            printf("%d ", v3[pos]);
        }
    }

    free(v1);
    free(v2);
    free(v3);

    return 0;
}