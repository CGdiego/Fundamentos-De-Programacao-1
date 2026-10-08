#include <stdio.h>

void incDec (int *a, int *b){
    (*a)++;
    (*b)++;
}

int main(){
    int a = 1, b = 998;

    incDec(&a, &b);

    printf("%d %d", a, b);

    return 0;
}