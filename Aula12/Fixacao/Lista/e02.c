#include <stdio.h>

int main(){
    int variavel = 9, *ponteiro = &variavel;

    printf("%d\n", variavel);
    printf("%p\n", &variavel);
    printf("%p\n", ponteiro);
    printf("%d\n", *ponteiro);
    printf("%p\n", &ponteiro);

    return 0;
}