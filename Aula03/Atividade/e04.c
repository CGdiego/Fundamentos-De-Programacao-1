#include <stdio.h>

int main(){
    int hI, hF;

    printf("Insira a hora inicial e depois a hora final de um jogo (0 ateh 23):\n");
    scanf("%d %d", &hI, &hF);

    if (hF > hI)
        printf("O jogo durou %d hora(s).", hF - hI);
    else
        printf("O jogo durou %d hora(s).", 24 - hI + hF);

    return 0;
}
