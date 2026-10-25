#include <stdio.h>

int main(){
    int i, N, v[1024];

    scanf("%d", &N);

    for (i = 0; i < N; i++)
        scanf("%d", &v[i]);

    for (i = 0; i < N; i++)
        printf("%d\n", v[N - 1 - i]);

    return 0;
}