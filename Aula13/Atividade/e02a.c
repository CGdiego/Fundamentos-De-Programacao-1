#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(){
    int i, v[N];

    for (i = 0; i < N; i++)
        v[i] = rand();

    for (i = 0; i < N; i++)
        printf("%d\n", v[N - 1 - i]);

    return 0;
}