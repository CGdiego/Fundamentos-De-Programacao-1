#include <stdio.h>

// Sem vetores
int main(){
    int N, A = -1, B = -1, interruptor, i;

    scanf("%d", &N);

    for (i = 0; i < N; i++){
        scanf("%d", &interruptor);

        if (interruptor == 1)
            A *= -1;
        else if (interruptor == 2){
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
