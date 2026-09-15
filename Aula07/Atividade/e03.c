#include <stdio.h>

int main(){
    int num, den, q = 0;

    scanf("%d %d", &num, &den);

    while (num >= den){
        num -= den;
        q++;
    }

    printf("%d %d", q, num);

    return 0;
}