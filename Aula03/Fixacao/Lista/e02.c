#include <stdio.h>
#include <math.h>

int main(){
    float valor;
    
    scanf("%f", &valor);

    if (valor > 0)
        printf("%f", sqrt(valor));
    else
        printf("Não foi possível calcular.");

    return 0;
}