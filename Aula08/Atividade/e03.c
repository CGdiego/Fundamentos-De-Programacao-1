#include <stdio.h>

int main(){
    int n, i, a = 0, b = 1, c = 1;

    scanf("%d", &n);
    printf("%d, %d, %d", a, b, c);

    for (i = 0; i < n - 3; i++){
        a = b;
        b = c;
        c = a + b;

        printf(", %d", c);
    }
}