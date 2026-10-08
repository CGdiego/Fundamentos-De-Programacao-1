#include <stdio.h>

int ehAlternante(int n, int *k) {
    int num, paridade_atual, count = 1, k_definido = 0;

    scanf("%d", &num);
    paridade_atual = num % 2;

    for (int i = 1; i < n; i++) {
        scanf("%d", &num);
        int paridade = num % 2;

        if (paridade == paridade_atual) {
            count++;
            if (k_definido && count > *k) {
                return 0;
            }
        } else {
            if (!k_definido) {
                *k = count;
                k_definido = 1;
            } else {
                if (count != *k) {
                    return 0;
                }
            }
            paridade_atual = paridade;
            count = 1;
        }
    }

    if (!k_definido) {
        *k = count;
        return 1;
    }

    if (count == *k) {
        return 1;
    }

    return 0;
}

int main() {
    int n, k = 0;

    if (scanf("%d", &n) != 1 || n <= 1) {
        return 0;
    }

    if (ehAlternante(n, &k)) {
        printf("A sequencia eh %d-alternante.\n", k);
    } else {
        printf("A sequencia nao eh alternante.\n");
    }

    return 0;
}