#include <stdio.h>

int main(){
    int car, n, i, j, quantX = 1;

    scanf(" %c %d", &car, &n);

    for (i = 0; i <= (2 * n + 1) / 2; i++){
        for (j = 0; j < n - i; j++)
            printf(" ");
        for (j = 0; j < quantX; j++)
            printf("%c", car);
        quantX += 2;
        printf("\n");
    }

    quantX = 2 * n - 1;
    for (i = 0; i < (2 * n + 1) / 2; i++){
        for (j = 0; j < i + 1; j++)
            printf(" ");
        for (j = 0; j < quantX; j++)
            printf("%c", car);
        quantX -= 2;
        printf("\n");
    }

    return 0;
}