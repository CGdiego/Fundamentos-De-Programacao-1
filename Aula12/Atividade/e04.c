#include <stdio.h>

#define LED_BASE_ADDR 0x1000
#define N_COLUNAS 128

int main() {
    int deslocamento;

    for (deslocamento = 0; deslocamento < N_COLUNAS; deslocamento++) {
        unsigned char valor = 0x80 >> (deslocamento % 8);

        printf("Coluna %3d | Endereco: 0x%X | Valor Bit: 0x%02X\n", 
                deslocamento, LED_BASE_ADDR + deslocamento, valor);
    }

    return 0;
}