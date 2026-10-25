#include <stdio.h>

int main(){
    int N, i, a[100], somaTotal = 0, somaEsquerda = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++){
        scanf("%d", &a[i]);
        somaTotal += a[i];
    }

    for (i = 0; i < N; i++){
        somaEsquerda += a[i];
        if (somaEsquerda == somaTotal - somaEsquerda){
            printf("%d\n", i + 1);
            break;
        }
    }

    return 0;
}