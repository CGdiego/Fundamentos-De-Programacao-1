#include <stdio.h>
#define N 3

int main(){
    char string[N][128];
    int i;
    
    for (i = 0; i < N; i++)
        fgets(string[i], 128, stdin);
        
    for (i = N - 1; i >= 0; i--)
        printf("%s", string[i]);
        
    return 0;
}