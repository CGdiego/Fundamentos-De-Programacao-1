#include <stdio.h>

int main(){
    int c, tamanhoPista;

    scanf("%d", &c);
    scanf("%d", &tamanhoPista);

    printf("%d", c % tamanhoPista);

    return 0;
}