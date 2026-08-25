#include <stdio.h>

int main(){
    float n1, n2, n3, media, notaRec;

    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3;

    if (media >= 6)
        printf("Aprovado!");
    else if (media >= 4) {
        printf("Ficou em exame.\n");
        scanf("%f", &notaRec);
        if ((media + notaRec) / 2 >= 5)
            printf("Aprovado!");
        else
            printf("Reprovado...");
    }  
    else
        printf("Reprovado...");

    return 0;
}