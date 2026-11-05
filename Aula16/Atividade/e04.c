#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFLEN 1024

int main(){
    char s1[BUFLEN], s2[BUFLEN], s3[BUFLEN];

    fgets(s1, BUFLEN, stdin);
    fgets(s2, BUFLEN, stdin);
    fgets(s3, BUFLEN, stdin);

    while (1){
        strcpy(s1, s2);
        strcpy(s2, s3);
        fgets(s3, BUFLEN, stdin);

        system("clear");

        printf("%s", s1);
        printf("%s", s2);
        printf("%s", s3);
    }

    return 0;
}
