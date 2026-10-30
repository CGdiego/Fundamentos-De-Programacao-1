#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N 100

void stling(char *string, char *buffer){
    int i = 0, j = 0;
    char troca;

    while (string[i] != '\0' && string[i] != '\n'){
        if (string[i] == 'R' || string[i] == 'r') {
            // Se a proxima letra NAO for do alfabeto, e fim de palavra (mantem o R)
            if (!isalpha(string[i + 1])){
                buffer[j] = string[i];
                j++;
                i++;
            }
            else{
                if (string[i] == 'R') {
                    troca = 'L';
                }
                else{
                    troca = 'l';
                }

                if (string[i + 1] == 'R' || string[i + 1] == 'r'){
                    buffer[j] = troca;
                    j++;
                    i += 2;
                }
                else{
                    buffer[j] = troca;
                    j++;
                    i++;
                }
            }
        }
        else{
            buffer[j] = string[i];
            j++;
            i++;
        }
    }
    buffer[j] = '\0';
}

int main(){
    char string[N], buffer[N];

    fgets(string, N, stdin);

    stling(string, buffer);
    printf("%s\n", buffer);

    return 0;
}