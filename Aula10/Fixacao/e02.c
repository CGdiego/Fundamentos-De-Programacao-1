#include <stdio.h>

int ehProgressaoAritmetica (int n1, int n2, int n3, int n4);

int main(){
    int pa = ehProgressaoAritmetica(12, 15, 18, 21);

    if (pa)
        printf("Eh PA de razao %d.", pa);
    else
        printf("Nao eh PA.");

    return 0;
}

int ehProgressaoAritmetica (int n1, int n2, int n3, int n4){
    int r1, r2, r3;

    r1 = n2 - n1;
    r2 = n3 - n2;
    r3 = n4 - n3;

    if (r1 == r2 && r2 == r3)
        return r1;
    else
        return 0;
}