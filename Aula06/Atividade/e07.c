#include <stdio.h>

int main(){
    float valor1 = 0, valor2 = 0;
    int i;

    for (i = 1; i <= 1000000; i++){
        if (i % 2 != 0)
            valor1 += 1.0 / i;
        else
            valor1 -= 1.0 / i;
    }

    for (i = 1000000; i >= 1; i--){
        if (i % 2 != 0)
            valor2 += 1.0 / i;
        else
            valor2 -= 1.0 / i;
    }

    printf("%.20f\n", valor1);
    printf("%.20f\n", valor2);

    return 0;
}