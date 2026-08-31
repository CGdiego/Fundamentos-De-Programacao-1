#include <stdio.h>

int main(){
    int v1, v2, v3;

    scanf("%d %d %d", &v1, &v2, &v3);

    if (!(v1 + v2 > v3 && v1 + v3 > v2 && v2 + v3 > v1)){
        printf("Nao eh um triangulo.");
        return 0;
    }

    if (v1 == v2 && v2 == v3)
        printf("Voce digitou um triangulo equilatero.");
    else if (v1 == v2 && v1 != v3 || v1 == v3 && v1 != v2 || v2 == v3 && v2 != v1)
        printf("Voce digitou um triangulo isosceles.");
    else
        printf("Voce digitou um triangulo escaleno.");

    return 0;
}