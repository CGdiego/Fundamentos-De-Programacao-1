#include <stdio.h>

int main(){
    int t, d, h, m, s;

    scanf("%d", &t);

    d = t/86400;
    h = (t-86400*d)/3600;
    m = (t-86400*d-3600*h)/60;
    s = t-86400*d-3600*h-60*m;

    printf("%d segundos correspondem a %d dia(s), %d hora(s), %d minuto(s) e %d segundo(s).", t, d, h, m, s);

    return 0;
}