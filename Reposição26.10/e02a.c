#include <stdio.h>

// Com vetores
int main(){
    int N, sequencia[100], A = -1, B = -1, i;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
        scanf("%d", &sequencia[i]);

    for (i = 0; i < N; i++){
        if (sequencia[i] == 1)
            A *= -1;
        else if (sequencia[i] == 2){
            A *= -1;
            B *= -1;
        }
    }

    if (A == -1)
        A = 0;
    if (B == -1)
        B = 0;

    printf("A - %d\n", A);
    printf("B - %d\n", B);

    return 0;
}
