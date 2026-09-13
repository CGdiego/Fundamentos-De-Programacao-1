#include <stdio.h>

int main () {
    int i, idade;

    for (i = 0; i <= 4; i++) {
        printf("Digite a idade: ");
        scanf("%d", &idade);

        printf("A idade digitada foi: %d \n", idade);
    }
    return 0;
}