#include <stdio.h>

int main(){
    float altFoo = 1.5, altBar = 1.1;
    int i;

    for (i = 0; altFoo >= altBar; i++){
        altFoo += 0.02;
        altBar += 0.03;
    }

    printf("Anos: %d, Altura Foolano: %f, Altura Barano: %f.", i, altFoo, altBar);

    return 0;
}