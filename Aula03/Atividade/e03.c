#include <stdio.h>

int main(){
    int n1, n2, n3;

    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2){
        if (n1 > n3)
            printf("O primeiro numero eh maior.");
        else if (n3 > n1)
            printf("O terceiro numero eh maior.");
        else
            printf("Os maiores numeros sao o primeiro e o terceiro.");
    }
    else if (n3 > n2){
        if (n1 > n3)
            printf("O primeiro numero eh maior.");
        else if (n3 > n1)
            printf("O terceiro numero eh maior.");
        else
            printf("Os maiores numeros sao o primeiro e o terceiro.");
    }
    else if (n2 > n3){
        if (n1 > n2)
            printf("O primeiro numero eh maior.");
        else if (n2 > n1)
            printf("O segundo numero eh maior.");
        else
            printf("Os maiores numeros sao o primeiro e o segundo.");
    }
    else if (n1 > n3){
        if (n1 > n2)
            printf("O primeiro numero eh maior.");
        else if (n2 > n1)
            printf("O segundo numero eh maior.");
        else
            printf("Os maiores numeros sao o primeiro e o segundo.");
    }
    else if (n2 > n1){
        if (n2 > n3)
            printf("O segundo numero eh maior.");
        else if (n3 > n2)
            printf("O terceiro numero eh maior.");
        else
            printf("Os maiores numeros sao o primeiro e o segundo.");
    }
    else if (n3 > n1){
        if (n2 > n3)
            printf("O segundo numero eh maior.");
        else if (n3 > n2)
            printf("O terceiro numero eh maior.");
        else
            printf("Os maiores numeros sao o primeiro e o segundo.");
    }
    else
        printf("Todos os numeros sao iguais.");


    return 0;
}
