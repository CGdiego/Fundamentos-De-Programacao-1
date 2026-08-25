#include <stdio.h>

int main(){
    float n1, n2, n3, n4, n5;

    scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);

    printf("%f\n%f\n%f\n%f\n", (n1+n2)/2, (n1+n2+n3)/3, (n1+n2+n3+n4)/4, (n1+n2+n3+n4+n5)/5);

    return 0;
}