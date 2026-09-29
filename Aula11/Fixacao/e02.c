#include <stdio.h>

int verificaFinal(int, int);

int main(){
    int num1, num2;

    scanf("%d %d", &num1, &num2);
    printf("%d", verificaFinal(num1, num2));

    return 0;
}

int verificaFinal(int a, int b){
    while (b){
        if (a % 10 != b % 10)
            return 0;

        a /= 10;
        b /= 10;
    }

    return 1;
}