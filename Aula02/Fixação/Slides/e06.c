#include <stdio.h>

int main() {
    float peso, alt, taxa;
    int idade, codigo;

    scanf("%d %d %f %f %f", &codigo, &idade, &peso, &alt, &taxa);

    printf("Código: %d\nIdade:%d\nPeso:%f\nAltura:%f\nTaxa: %f\n", codigo, idade, peso, alt, taxa);

    return 0;
}