#include <stdio.h>
#include <string.h>
#define N 100

int ehPalindromo (char* s);

int main(){
    char string[N];

    fgets(string, N, stdin);

    if (ehPalindromo(string))
        printf("Eh palindromo.\n");
    else
        printf("Nao eh palindromo.\n");
}

int ehPalindromo (char* s){
    int i, j, tamanho;
    char reverso[N];

    tamanho = strlen(s);

    if (s[tamanho - 1] == '\n'){
        s[tamanho - 1] = '\0';
        tamanho--;
    }

    for (i = tamanho - 1, j = 0; i >= 0; i--, j++)
        reverso[j] = s[i];

    reverso[j] = '\0';

    for (i = 0; i < tamanho; i++){
        if (s[i] != reverso[i])
            return 0;
    }

    return 1;
}