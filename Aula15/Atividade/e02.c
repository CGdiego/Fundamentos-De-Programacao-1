#include <stdio.h>

int contaPalavras(char *string){
    int contagem = 0, dentroPalavra = 0, i;
    char c;

    for (i = 0; string[i] != '\0'; i++){
        c = string[i];

        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
            if (!dentroPalavra){
                dentroPalavra = 1;
                contagem++;
            }
            else
                dentroPalavra = 0;
        }
    }

    return contagem;
}

int main(){
    char string[100] = "Bom dia! Teste 123";

    printf("%d", contaPalavras(string));

    return 0;
}