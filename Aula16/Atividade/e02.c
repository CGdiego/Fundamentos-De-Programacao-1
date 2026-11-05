#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100

char* concatenaStrings (char* s1, char* s2){
    char* s3, i, j;
    int tam1, tam2, tam3;

    tam1 = strlen(s1);
    tam2 = strlen(s2);
    tam3 = tam1 + tam2;

    s3 = (char*) malloc(tam3 * sizeof(char));

    for(i = 0; i < tam1; i++)
       s3[i] = s1[i];

    for(i = 0, j = tam1; i < tam2; i++, j++)
       s3[j] = s2[i];

    return s3;
}

int main(){
    char string1[N] = "teste 123", string2[N] = "foobar", *string3;

    string3 = concatenaStrings(string1, string2);

    printf("%s", string3);

    free(string3);

    return 0;
}
