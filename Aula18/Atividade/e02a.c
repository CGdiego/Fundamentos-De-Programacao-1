#include <stdio.h>
#define N 5

int main() {
    char matriz[N][N + 1] = {{"ABCDE"},
                             {" BCDE"},
                             {"  CDE"},
                             {"   DE"},
                             {"    E"}};
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            printf("%c", matriz[i][j]);
        for (j = N - 1; j >= 0; j--)
            printf("%c", matriz[i][j]);
        printf("\n");
    }

    for (i = N - 1; i >= 0; i--) {
        for (j = 0; j < N; j++)
            printf("%c", matriz[i][j]);
        for (j = N - 1; j >= 0; j--)
            printf("%c", matriz[i][j]);
        printf("\n");
    }

    return 0;
}