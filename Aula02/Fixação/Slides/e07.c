#include <stdio.h>

int main(){
    int horas, minutos, segundos;
    float valor = 1.2;

    printf("Digite horas, minutos e segundos:\n");
    scanf("%d %d %d", &horas, &minutos, &segundos);

    printf("O horário é %d:%d:%d.\n", horas, minutos, segundos);
    printf("Float com duas casas decimais: %.2f.\n", valor);

    return 0;
}