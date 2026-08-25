#include <stdio.h>

int main(){
    int anoNascimento, anoAtual, idade;

    scanf("%d", &anoNascimento);
    scanf("%d", &anoAtual);

    idade = anoAtual - anoNascimento;

    printf("Sua idade ao final do ano é %d\n", idade);

    if (idade < 16)
        printf("Você é não eleitor");
    else if (idade < 18)
        printf("Você é eleitor facultativo");
    else if (idade < 65)
        printf("Você é eleitor obrigatório");
    else
        printf("Você é eleitor facultativo");

    return 0;
}