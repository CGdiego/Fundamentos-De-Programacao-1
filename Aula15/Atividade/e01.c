#include <stdio.h>

int main(){
    int pedras[100] = {0}, N, M, i, pos, posInicial, salto;

    scanf("%d %d", &N, &M);

    for (i = 0; i < M; i++){
        scanf("%d %d", &posInicial, &salto);

        pedras[posInicial] = 1;

        for (pos = posInicial + salto; pos < N; pos += salto)
            pedras[pos] = 1;

        for (pos = posInicial - salto; pos >= 0; pos -= salto)
            pedras[pos] = 1;
    }

    for (i = 0; i < N; i++)
        printf("%d", pedras[i]);

    return 0;
}