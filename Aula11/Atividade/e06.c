#include <stdio.h>

#define ASEGB 1
#define BSEGA 2

int verificaFinal(unsigned int a, unsigned int b) {
    while (b > 0) {
        if (a % 10 != b % 10)
            return 0;
        a /= 10;
        b /= 10;
    }
    return 1;
}

int verificaSegmento(unsigned int a, unsigned int b) {
    int trocou = 0;
    unsigned int aux;

    if (a == b)
        return 0;

    if (b > a) {
        aux = a;
        a = b;
        b = aux;
        trocou = 1;
    }

    while (a > b) {
        if (verificaFinal(a, b)) {
            if (trocou)
                return ASEGB;
            else
                return BSEGA;
        }
        a /= 10;
    }

    return 0;
}

int main() {
    unsigned int a, b;
    int res;

    scanf("%u %u", &a, &b);

    res = verificaSegmento(a, b);

    if (res == ASEGB)
        printf("A eh segmento de B\n");
    else if (res == BSEGA)
        printf("B eh segmento de A\n");
    else
        printf("Nenhum eh segmento do outro\n");

    return 0;
}