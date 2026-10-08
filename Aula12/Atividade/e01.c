#include <stdio.h>

void segundosParaHMS (int, int *, int *, int *);

int main(){
    int segundos, hora, minuto, segundo;

    scanf("%d", &segundos);

    segundosParaHMS(segundos, &hora, &minuto, &segundo);

    printf("%02d:%02d:%02d", hora, minuto, segundo);

    return 0;
}

void segundosParaHMS (int total_segundos, int *h, int *m, int *s){
    *h = total_segundos / 3600;
    *m = (total_segundos % 3600) / 60;
    *s = (total_segundos % 3600) % 60;
}