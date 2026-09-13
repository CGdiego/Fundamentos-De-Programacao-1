#include <stdio.h>
#define N 15

int main(){
    int i = 0;

    while (i < N){
        printf("%d\n", i);
        i++;
    }

    printf("\n");

    for (i = 0; i < N; i++)
        printf("%d\n", i);

    return 0;
}