#include <stdio.h>

int main(){
    int i = 1, n;

    scanf("%d", &n);

    printf("\n");

    while (i < 10){
        printf("%d\n", n+i);
        i++;
    }

    printf("\n");

    for (i = 1; i < 10; i++)
        printf("%d\n", n+i);

    return 0;
}