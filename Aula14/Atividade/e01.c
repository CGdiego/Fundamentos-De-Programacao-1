#include <stdio.h>

int main(){
    int N, i, acertos = 0;
    char gabarito[81], resposta[81];

    scanf("%d", &N);

    scanf("%s", gabarito);
    scanf("%s", resposta);

    for (i = 0; i < N; i++){
        if (gabarito[i] == resposta[i])
            acertos++;
    }

    printf("%d", acertos);

    return 0;
}