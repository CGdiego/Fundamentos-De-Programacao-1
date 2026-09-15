int main(){
    int i, n, valor, aux, ehcrescente = 1, ehdecrescente = 1;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &valor);

        if (i > 0 && valor < aux)
            ehcrescente = 0;
        if (i > 0 && valor > aux)
            ehdecrescente = 0;

        aux = valor;
    }

    if (ehcrescente && ehdecrescente || !ehcrescente && !ehdecrescente)
        printf("Nao eh nenhum dos casos.");
    else if (ehcrescente)
        printf("Eh crescente.");
    else
        printf("Eh decrescente.");

    return 0;
}