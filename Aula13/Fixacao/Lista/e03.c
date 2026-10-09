#include <stdio.h>
#define N 10

int main(){
    int numeros[N], i;

    for (i = 0; i < N; i++)
        scanf("%d", &numeros[i]);

    for (i = 0; i < N; i += 2)
        printf("%d", numeros[i]);

    for (i = 1; i < N; i += 2)
        printf("%d", numeros[i]);

    return 0;
}