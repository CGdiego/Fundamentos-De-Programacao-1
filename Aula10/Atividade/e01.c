#include <stdio.h>

int arredonda(double x);

int main() {
    double numero;

    scanf("%lf", &numero);
    printf("%d\n", arredonda(numero));

    return 0;
}

int arredonda(double x) {
    if (x >= 0.0)
        return (int)(x + 0.5);
    else
        return (int)(x - 0.5);
}