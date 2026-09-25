#include <stdio.h>

int ehBissexto (int ano);

int main(){
    int ano = 2026, bissexto = ehBissexto(ano);

    if (bissexto)
        printf("Eh bissexto.");
    else
        printf("Nao eh bissexto.");

    return 0;
}

int ehBissexto (int ano){
    if (!(ano % 400) || !(ano % 4) && (ano % 100))
        return 1;
    else
        return 0;
}