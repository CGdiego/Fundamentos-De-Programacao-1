#include <stdio.h>
#define N_TERMOS 100000000

int main(){
    int denom = 1, i;
    float pi, var = 0;

    for (i = 0; i < N_TERMOS; i++){
        if (i % 2 == 0)
            var += 1.0/denom;
        else
            var -= 1.0/denom;

        denom += 2;
    }

    pi = var * 4;
    printf("%.8f", pi);

    return 0;
}