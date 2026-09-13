#include <stdio.h>

int main(){
    int x = 10;

    while (x >= 10 && x <= 20){
        scanf("%d", &x);

        if (x >= 10 && x <= 20)
            printf("ECO %d\n\n", x);
    }


    return 0;
}