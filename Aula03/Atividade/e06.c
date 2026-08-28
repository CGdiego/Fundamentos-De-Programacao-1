#include <stdio.h>

int main(){
    float x, y;

    printf("Insira as coordenadas x e y: ");
    scanf("%f %f", &x, &y);

    if (x > 0){
        if (y > 0)
            printf("Q1");
        else if (y < 0)
            printf("Q4");
        else
            printf("Eixo x");
    }
    else if (x < 0){
        if (y > 0)
            printf("Q2");
        else if (y < 0)
            printf("Q3");
        else
            printf("Eixo x");
    }
    else{
        if (y != 0)
            printf("Eixo y");
        else
            printf("Origem");
    }

    return 0;
}
