#include <stdio.h>

int ehParDeFoolano (unsigned int n1, unsigned int n2);

int main(){
    unsigned int n1, n2;

    scanf("%u %u", &n1, &n2);

    if (ehParDeFoolano (n1, n2))
        printf("Eh par de Foolano.");
    else
        printf("Nao eh par de Foolano.");

    return 0;
}

int ehParDeFoolano (unsigned int n1, unsigned int n2){
    int d, c1 = 0, c2 = 0;
    unsigned int temp1 = n1, temp2 = n2;

    for (d = 0; d <= 9; d++){
        while (temp1 > 0){
            if (temp1 % 10 == d)
                c1++;
            temp1 /= 10;
        }

        while (temp2 > 0){
            if (temp2 % 10 == d)
                c2++;
            temp2 /= 10;
        }

        if (c1 != c2)
            return 0;
    }

    return 1;
}