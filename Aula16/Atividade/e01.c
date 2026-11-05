#include <stdio.h>
#include <stdlib.h>
#define BUFLEN 1024

char* empacotaString (char* string){
    int tamanho = 0, i;
    char* copiaString;

    while (string[tamanho] != '\0')
        tamanho++;
    tamanho++;

    copiaString = (char*) malloc(tamanho * sizeof(char));

    for (i = 0; i < tamanho; i++)
        copiaString[i] = string[i];

    copiaString[tamanho - 1] = '\0';

    return copiaString;
}

int main(){
    int i;
    char buffer[BUFLEN], *string;
    fgets(buffer, BUFLEN, stdin);

    string = empacotaString(buffer);
    printf("%s", string);
    free(string);

    return 0;
}
