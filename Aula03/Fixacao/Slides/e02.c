#include <stdio.h>

int main(){
    int matricula;

    printf("Digite sua matrúcla: ");
    scanf("%d", &matricula);

    if (matricula == 100555)
        printf("Leyza estah matriculada.");
    else if (matricula == 200888)
        printf("Rafael estah matriculado.");
    else
        printf("Leyza nao estah matriculada.");

    return 0;
}