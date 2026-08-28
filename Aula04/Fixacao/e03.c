#include <stdio.h>

int main(){
    int ano_atual, ano_nascimento, ano_inicio_inss, idade, contribuicao;

    printf("Insira o ano atual, seu ano de nascimento e o ano que começou a contribuir para o INSS: ");
    scanf("%d %d %d", &ano_atual, &ano_nascimento, &ano_inicio_inss);

    idade = ano_atual - ano_nascimento;
    contribuicao = ano_atual - ano_inicio_inss;

    printf("A idade do empregado ao final do ano eh %d anos.\n", idade);

    if (idade >= 65 || contribuicao >= 30 || idade >= 60 && contribuicao >= 25)
        printf("Voce poderah se aponsetar ateh o final do ano!\n");
    else
        printf("Voce ainda nao poderah se aposentar ateh o final do ano.\n");

    return 0;
}