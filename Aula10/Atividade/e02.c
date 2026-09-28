#include <stdio.h>

double casasDecimais (double);

int main(){
    double n1, resp;

    scanf("%lf", &n1);
    resp = casasDecimais(n1);
    printf("%lf", resp);

    return 0;
}

double casasDecimais (double x){
    return x - (int) x;
}