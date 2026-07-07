// Guilherme Felipe Molon
// Brincando com struct, ponteiros e alocação dinâmica

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char palavra[20];
} ESTRUTURA;

int main() {

    ESTRUTURA * a = (ESTRUTURA*) malloc (1 * sizeof(ESTRUTURA));

    if (a == NULL) {
        printf("ERRO.\n");
        return 0;
    }

    strcpy(a->palavra, "Alguma coisa..");

    int x = 1;
    int *y = &x;

    printf("x = %d\n", *y);
    printf("%s\n", a->palavra);

    return 0;
}
