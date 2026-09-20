#include <stdio.h>

int main()
{
    int div, candidato, eh_primo, nPrimos;

    printf("Qual numero testar? ");
    scanf("%d", &candidato);

    while (candidato != -1){
        eh_primo = 1;
        for (div=2; div<=candidato-1; div++){
            if (candidato%div == 0)
                eh_primo = 0; // se teve divisor, altera flag
        }
        if(eh_primo==1)
            printf("%d eh primo \n", candidato);

        printf("Qual numero testar? ");
        scanf("%d", &candidato);
    }

    return 0;
}