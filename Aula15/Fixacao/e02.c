#include <stdio.h>
#define N 1000

void inverteString(char *string){
    int tamanho = 0, inicio = 0, fim;
    char temp;
    
    while (string[tamanho] != '\0')
        tamanho++;

    fim = tamanho - 1;

    while (inicio < fim){
        temp = string[inicio];
        string[inicio] = string[fim];
        string[fim] = temp;
        inicio++;
        fim--;
    }
}

int main(){
    char string[N] = "String teste 123";

    printf("%s\n", string);
    inverteString(string);
    printf("%s\n", string);

    return 0;
}