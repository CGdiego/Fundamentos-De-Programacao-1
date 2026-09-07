#include <stdio.h>

int main(){
    int i = 1, n;

    scanf("%d", &n);

    while (i < 11){
        printf("%d * %d = %d\n", i, n, i*n);
        i++;
    }

    printf("\n");

    for (i = 1; i < 11; i++)
        printf("%d * %d = %d\n", i, n, i*n);

    return 0;
}