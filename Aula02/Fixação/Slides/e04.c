#include <stdio.h>

int main ()
{
    int primeiro = 10,
    segundo = 20,
    aux;

    aux = primeiro;
    primeiro = segundo;
    segundo = aux;

    return 0;
}