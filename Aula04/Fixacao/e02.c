#include <stdio.h>

int main(){
    int x;

    printf("Digite um inteiro: ");
    scanf("%d", &x);

    if (x % 2 == 0 && x > 10 || x % 2 != 0 && x < 50)
        printf("SIM\n");
    else
        printf("NAO\n");

    return 0;
}