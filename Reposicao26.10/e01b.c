#include <stdio.h>

// Sem vetores
int main(){
    int N, L, C, i, coposQuebrados = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++){
        scanf("%d", &L);
        scanf("%d", &C);

        if (L > C)
            coposQuebrados += C;
    }

    printf("%d", coposQuebrados);

    return 0;
}
