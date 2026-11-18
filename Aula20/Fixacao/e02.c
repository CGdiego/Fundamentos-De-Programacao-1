#include <stdio.h>
#include <string.h>

#define NUM_MESES 12

typedef struct {
    int num_mes;
    char nome_mes[4];
    int num_dias;
} Mes;

int main(){
    Mes meses[NUM_MESES];
    int i, n_mes;

    for (i = 0; i < NUM_MESES; i++){
        meses[i].num_mes = i+1;

        if (meses[i].num_mes == 2)
            meses[i].num_dias = 28;
        else if (meses[i].num_mes == 4 || meses[i].num_mes == 6 || meses[i].num_mes == 9 || meses[i].num_mes == 11)
            meses[i].num_dias = 30;
        else
            meses[i].num_dias = 31;
    }

    strcpy(meses[0].nome_mes, "Jan");
    strcpy(meses[1].nome_mes, "Fev");
    strcpy(meses[2].nome_mes, "Mar");
    strcpy(meses[3].nome_mes, "Abr");
    strcpy(meses[4].nome_mes, "Mai");
    strcpy(meses[5].nome_mes, "Jun");
    strcpy(meses[6].nome_mes, "Jul");
    strcpy(meses[7].nome_mes, "Ago");
    strcpy(meses[8].nome_mes, "Set");
    strcpy(meses[9].nome_mes, "Out");
    strcpy(meses[10].nome_mes, "Nov");
    strcpy(meses[11].nome_mes, "Dez");

    printf("Digite o numero do mes: ");
    scanf("%d", &n_mes);

    printf("%s tem %d dias.\n", meses[n_mes-1].nome_mes, meses[n_mes-1].num_dias);

    return 0;
}