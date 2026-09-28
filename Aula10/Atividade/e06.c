#include <stdio.h>

int testaTipoChar (char);

int main(){
    char caractere;

    scanf("%c", &caractere);
    printf("%d", testaTipoChar(caractere));

    return 0;
}

int testaTipoChar (char c){
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        return 1;
    else if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return 2;
    else if (c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U' && c <= 'Z' && c >= 'A')
        return 3;
    else if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c <= 'z' && c >= 'a')
        return 4;
    else if (c >= '0' && c <= '9')
        return 5;

    return 0;
}