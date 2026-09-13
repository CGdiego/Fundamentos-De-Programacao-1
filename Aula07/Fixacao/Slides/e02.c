#include <stdio.h>

int main() {
    const int senhaCorreta = 12345;
    int valorLido;

    do {
    printf("Digite a senha: ");
    scanf("%d", &valorLido);
    } while (valorLido != senhaCorreta);


    printf("Acesso permitido!\n");

    return 0;
}