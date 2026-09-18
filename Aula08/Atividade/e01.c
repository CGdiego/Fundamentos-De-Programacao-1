#include <stdio.h>

int main(){
    int n, i = 1;

    scanf("%d", &n);

    while (n != 1){
        if (!(n % 2))
            n /= 2;
        else
            n = n * 3 + 1;

        printf("%d, ", n);
        i++;
    }

    printf("\nGerou %d elementos.", i);

    return 0;
}