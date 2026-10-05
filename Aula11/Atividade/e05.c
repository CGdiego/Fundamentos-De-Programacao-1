#include <stdio.h>

#define PICO 1
#define VALE 2
#define SUBIDA 3
#define DESCIDA 4

int leProximoDado(){
    int valor;
   
    if (scanf("%d", &valor) == 1)
        return valor;

    return -1;
}

void registraPadrao (int posicao, int tipo){
    printf("Na posicao %d foi identificado ", posicao);

    if (tipo == 1)
        printf("PICO\n");
    else if (tipo == 2)
        printf("VALE\n");
    else if (tipo == 3)
        printf("SUBIDA\n");
    else
        printf("DESCIDA\n");
}

int main(){
    int n1, n2, n3, i;

    n1 = leProximoDado();
    n2 = leProximoDado();
    n3 = leProximoDado();

    for (i = 2; n3 >= 0; i++){
        if (n2 > n1 && n2 > n3)
            registraPadrao(i, PICO);
        else if (n2 < n1 && n2 < n3)
            registraPadrao(i, VALE);
        else if (n2 > n1 && n2 < n3)
            registraPadrao(i, SUBIDA);
        else if (n2 < n1 && n2 > n3)
            registraPadrao(i, DESCIDA);

        n1 = n2;
        n2 = n3;
        n3 = leProximoDado ();
    }

    return 0;
}