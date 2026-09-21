#include <stdio.h>
#define DADO 6

int main(){
    int i, j;

    for (i = 1; i <= DADO; i++){
        for (j = 1; j <= DADO; j++){
            printf("%d, %d\n", i, j);
        }
    }

    return 0;
}