#include <stdio.h>

typedef struct {
    int hora;
    int minutos;
    int segundos;
} Horario;

int segundosEntre (Horario h1, Horario h2){
    h1.segundos = h1.segundos + 60 * h1.minutos + 3600 * h1.hora;
    h2.segundos = h2.segundos + 60 * h2.minutos + 3600 * h2.hora;

    return h2.segundos - h1.segundos;
}

int main(){
    Horario inicio = {10, 15, 0};
    Horario fim = {11, 30, 45};
    
    printf("Segundos passados: %d.\n", segundosEntre(inicio, fim));
    
    return 0;
}