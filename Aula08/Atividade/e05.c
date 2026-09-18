#include <stdio.h>
#define MIN_TERMO 0.2

int main(){
    double somatorio = 0, div = 1, i;

    for (i = 1; div > MIN_TERMO; i++){
        div = 1 / i;
        somatorio += div;

        printf("%.4f\t%.4f\n", div, somatorio);
    }

    return 0;
}