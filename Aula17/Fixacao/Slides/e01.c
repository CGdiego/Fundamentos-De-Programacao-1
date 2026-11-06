#include <stdio.h>
#define TAML 3
#define TAMC 3

int main(){
    int eh_triangular = 1, i, j;
    int m[TAML][TAMC] = {
        {1, 2, 3},
        {0, 4, 5},
        {0, 0, 6}
    };

    for (i = 1; i < TAML; i++){
        for (j = 0; j < i; j++){
            if (m[i][j] != 0){
                eh_triangular = 0;
                break;
            }
        }

        if (!eh_triangular)
            break; 
    }

    if (eh_triangular == 1)
        printf("A matriz eh triangular superior\n");
    else
        printf("A matriz não eh triangular superior\n");

    return 0;
}