#include <stdio.h>

#define MAX_BENFEITORIAS 10
#define MAX_EXERCITOS 10
#define MAX_TERRITORIOS 20

typedef struct {
    float lucro_mult;
    float lucro_soma;
} Benfeitoria;

typedef struct {
    float custo;
} Exercito;

typedef struct {
    float lucro_base;
    Benfeitoria* benfeitorias[MAX_BENFEITORIAS];
    int n_benfeitorias;
    Exercito* exercitos[MAX_EXERCITOS];
    int n_exercitos;
} Territorio;

typedef struct {
    Territorio* territorios[MAX_TERRITORIOS];
    int n_territorios;
} Faccao;

float lucroTotal (Faccao* f){
    int i, j;
    float total = 0, total_t = 0;
    Territorio* t;

    for (i = 0; i < f->n_territorios; i++){
        t = f->territorios[i];
        total_t = t->lucro_base;

        for (j = 0; j < t->n_benfeitorias; j++)
            total_t *= t->benfeitorias[j]->lucro_mult;

        for (j = 0; j < t->n_benfeitorias; j++)
            total_t += t->benfeitorias[j]->lucro_soma;

        for (j = 0; j < t->n_exercitos; j++)
            total_t -= t->exercitos[j]->custo;

        total += total_t;
    }

    return total;
}

int main(){
    Benfeitoria b1 = {1.5, 20.0}, b2 = {2.0, -10.0};
    Exercito e1 = {50.0}, e2 = {30.0};
    Territorio t1, t2;
    Faccao f;

    t1.lucro_base = 100.0;
    t1.benfeitorias[0] = &b1;
    t1.benfeitorias[1] = &b2;
    t1.n_benfeitorias = 2;
    t1.exercitos[0] = &e1;
    t1.n_exercitos = 1;

    t2.lucro_base = 40.0;
    t2.n_benfeitorias = 0;
    t2.exercitos[0] = &e1;
    t2.exercitos[1] = &e2;
    t2.n_exercitos = 2;

    f.territorios[0] = &t1;
    f.territorios[1] = &t2;
    f.n_territorios = 2;

    printf("Lucro total: %.2f\n", lucroTotal(&f));

    return 0;
}