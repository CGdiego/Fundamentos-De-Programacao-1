int soma (int a, int b, int *sub){

    int soma;

    soma = a + b;
    *sub = a - b;

    return soma;
}