#include <stdio.h>

int main(){
    float pg, pa, rg, ra;

    scanf("%f %f %f %f", &pg, &pa, &rg, &ra);

    if (pg / rg <= pa / ra)
        printf("Abasteça com gasolina.");
    else
        printf("Abasteça com álcool.");


    return 0;
}
