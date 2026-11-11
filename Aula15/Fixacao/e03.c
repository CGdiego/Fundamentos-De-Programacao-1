#include <stdio.h>

void contaLetras(char *string){
    int contagem[26] = {0}, i;
    char c;

    for (i = 0; string[i] != '\0'; i++){
        c = string[i];

        if (c >= 'A' && c <= 'Z')
            contagem[c - 'A']++;
        else if (c >= 'a' && c <= 'z')
            contagem[c - 'a']++;
    }

    for (i = 0; i < 26; i++)
        printf("%c: %d\n", 'A' + i, contagem[i]);
}

int main(){
    char *string = "Palavra teste 123 [abc]";

    printf("%s\n", string);

    contaLetras(string);

    return 0;
}