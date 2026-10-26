#include <stdio.h>

// Com vetores
int main(){
    int N, i, coposQuebrados = 0, L[100], C[100];

    scanf("%d", &N);

    for (i = 0; i < N; i++){
        scanf("%d %d", &L[i], &C[i]);
    }

    for (i = 0; i < N; i++){
        if (L[i] > C[i])
            coposQuebrados += C[i];
    }

    printf("%d", coposQuebrados);

    return 0;
}
