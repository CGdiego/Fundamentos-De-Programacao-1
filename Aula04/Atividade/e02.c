#include <stdio.h>

int main(){
    int nascimentoD, nascimentoM, nascimentoA, atualD, atualM, atualA, idade;

    scanf("%d/%d/%d", &nascimentoD, &nascimentoM, &nascimentoA);
    scanf("%d/%d/%d", &atualD, &atualM, &atualA);

    idade = atualA - nascimentoA;

    if (nascimentoM > atualM || nascimentoM == atualM && nascimentoD > atualD)
        idade -= 1;

    printf("Você tem %d anos.", idade);

    return 0;
}