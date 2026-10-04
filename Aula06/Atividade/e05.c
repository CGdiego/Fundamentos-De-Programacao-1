#include <stdio.h>

int main(){
    int hora1, minuto1, segundo1, hora2, minuto2, segundo2;

    scanf("%d:%d:%d", &hora1, &minuto1, &segundo1);
    scanf("%d:%d:%d", &hora2, &minuto2, &segundo2);

    if (segundo1 >= 60 || segundo2 >= 60 || minuto1 >= 60 || minuto2 >= 60 || segundo1 < 0 || segundo2 < 0 || minuto1 < 0 || minuto2 < 0 || hora1 < 0 || hora2 < 0){
        printf("Entrada inválida!\n");
        return 1;
    }

    segundo1 += segundo2;
    if (segundo1 >= 60){
        segundo1 -= 60;
        minuto1++;
    }

    minuto1 += minuto2;
    if (minuto1 >= 60){
        segundo1 -= 60;
        hora1++;
    }

    hora1 += hora2;

    printf("%02d:%02d:%02d\n", hora1, minuto1, segundo1);

    return 0;
}