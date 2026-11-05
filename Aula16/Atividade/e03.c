#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void balanceamentoDeParenteses (char* str, int* parenteses){
    int tamanho, i, j, valido;

    tamanho = strlen(str);

    for (i = 0; i < tamanho; i++){
        valido = 0;
        if (str[i] == '('){
            for (j = i + 1; j < tamanho; j++){
                if (str[j] == '(')
                    valido++;
                if (str[j] == ')'){
                    if (valido == 0){
                        parenteses[i] = j;
                        valido = -1;
                        break;
                    }
                    valido--;
                }
            }
            if (valido != -1)
                parenteses[i] = -1;
        }
        else if (str[i] == ')'){
            for (j = i - 1; j >= 0; j--){
                if (str[j] == ')')
                    valido++;
                if (str[j] == '('){
                    if (valido == 0){
                        parenteses[i] = j;
                        valido = -1;
                        break;
                    }
                    valido--;
                }
            }
            if (valido != -1)
                parenteses[i] = -1;
        }
        else
            parenteses[i] = 0;
    }
}

int main(){
    char string[100] = "if((a&&b)||(c&&d)){";
    int *parenteses, i, tamanho;

    tamanho = strlen(string);
    parenteses = (int*) malloc(tamanho * sizeof(int));

    balanceamentoDeParenteses(string, parenteses);

    for (i = 0; i < tamanho; i++)
        printf("%d ", parenteses[i]);

    free(parenteses);

    return 0;
}