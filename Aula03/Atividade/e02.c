#include <stdio.h>

int main(){
    int x, y, c, d, u;

    printf("Escolha um número entre 100 e 999: ");
    scanf("%d", &x);

    c = x/100;
    d = (x%100)/10;
    u = x%10;

    y = u*100 + d*10 + c;

    printf("%d", y);

    return 0;
}
