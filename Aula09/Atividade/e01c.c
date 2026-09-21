#include <stdio.h>
#define DADO 6

int main(){
    int i, j, k;

    for (i = 1; i <= DADO; i++){
        for (j = 1; j <= i; j++){
            for (k = 1; k <= j; k++){
                printf("%d, %d, %d\n", i, j, k);
            }
        }
    }

    return 0;
}