#include <stdio.h>

int main(){
    int n, i, j, encontrado = 1, valor;

    scanf("%d", &n);

    for (i = 1; encontrado != n; i++, encontrado = 0){
        /*for (j = 1; j <= n; j++){
            if (i % j == 0)
                encontrado += 1;
        }

        if (encontrado == n){
            valor = i;
            break;
        }
        encontrado = 0;*/

        encontrado = 1;
        for (j = 1; j <= n; j++){
            if (i % j != 0)
                encontrado = 0;
        }

        if (encontrado){
            valor = i;
            break;
        }
    }

    printf("%d", valor);

    return 0;
}