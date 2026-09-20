#include <stdio.h>
#define N 5

int main(){
    int i, j;

    for (i = 1; i <= N; i++){
        for (j = 1; j <= N; j++)
            printf("%d ", j);
        printf("\n");
    }

    return 0;
}