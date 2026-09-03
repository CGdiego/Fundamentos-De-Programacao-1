#include <stdio.h>

int main() {
    double rendimento, imposto, teto1 = 1200.25, teto2 = 2300.50, teto3 = 3500.75, teto4 = 4000.00;

    scanf("%lf", &rendimento);

    if (rendimento <= teto1) {
        imposto = 0.0;
    }
    else if (rendimento <= teto2) {
        imposto = (rendimento - teto1) * 0.075;
    }
    else if (rendimento <= teto3) {
        imposto = (teto2 - teto1) * 0.075 + (rendimento - teto2) * 0.15;
    }
    else if (rendimento <= teto4) {
        imposto = (teto2 - teto1) * 0.075 + (teto3 - teto2) * 0.15 + (rendimento - teto3) * 0.225;
    }
    else {
        imposto = (teto2 - teto1) * 0.075 + (teto3 - teto2) * 0.15 + (teto4 - teto3) * 0.225 + (rendimento - teto4) * 0.275;
    }

    printf("%.2lf\n", imposto);

    return 0;
}