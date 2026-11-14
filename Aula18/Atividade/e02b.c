#include <stdio.h>
#define N 5

int main() {
    char original[N][N + 1] = {{"ABCDE"},
                               {" BCDE"},
                               {"  CDE"},
                               {"   DE"},
                               {"    E"}};
    char saida[2 * N][2 * N + 1];
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            saida[i][j] = original[i][j];
            saida[i][2 * N - 1 - j] = original[i][j];
            saida[2 * N - 1 - i][j] = original[i][j];
            saida[2 * N - 1 - i][2 * N - 1 - j] = original[i][j];
        }
        saida[i][2 * N] = '\0';
        saida[2 * N - 1 - i][2 * N] = '\0';
    }

    for (i = 0; i < 2 * N; i++)
        printf("%s\n", saida[i]);

    return 0;
}