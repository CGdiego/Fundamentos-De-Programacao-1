#include <stdio.h>

int ehParDeFoolano (unsigned int n1, unsigned int n2);

int main(){
    unsigned int n1, n2;

    scanf("%u %u", &n1, &n2);

    if (ehParDeFoolano (n1, n2))
        printf("Eh par de Foolano.");
    else
        printf("Nao eh par de Foolano.");

    return 0;
}

int ehParDeFoolano (unsigned int n1, unsigned int n2){
    int i, cont[10] = {0};

    while (n1 > 0){
        cont[n1 % 10]++;
        n1 /= 10;
    }

    while (n2 > 0){
        cont[n2 % 10]--;
        n2 /= 10;
    }

    for (i = 0; i < 10; i++){
        if (cont[i])
            return 0;
    }

    return 1;
}