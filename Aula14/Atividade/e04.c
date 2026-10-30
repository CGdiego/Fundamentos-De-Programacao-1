#include <stdio.h>
#include <string.h>

#define N 50

int risada_engracada(char *risada){
    char vogais[N + 1];
    int i = 0, tam_vogais = 0;

    while (risada[i] != '\0' && risada[i] != '\n'){
        if (risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u'){
            vogais[tam_vogais] = risada[i];
            tam_vogais++;
        }
        i++;
    }

    for (i = 0; i < tam_vogais / 2; i++){
        if (vogais[i] != vogais[tam_vogais - 1 - i]){
            return 0;
        }
    }

    return 1;
}

int main(){
    char risada[N + 1];

    fgets(risada, N + 1, stdin);
    printf("%d\n", risada_engracada(risada));

    return 0;
}