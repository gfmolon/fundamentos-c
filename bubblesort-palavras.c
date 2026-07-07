// Guilherme Felipe Molon
// Bubble sort de palavras

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char palavras[5][20];

    int i, j;
    printf("Digite as palavras:\n");
    for(i=0; i<5; i++) {
       scanf("%s", palavras[i]);
    }

    char aux[20];
    for(i=0; i<5; i++) {
        for(j=0; j<5-1-i; j++) {
            if(strcmp(palavras[j], palavras[j+1]) > 0) {
                strcpy(aux, palavras[j]);
                strcpy(palavras[j], palavras[j+1]);
                strcpy(palavras[j+1], aux);
            }
        }
    }

    printf("Palavras em ordem alfabética:\n");
    for(i=0; i<5; i++) {
        printf("%s\n", palavras[i]);
    }

    return 0;
}

