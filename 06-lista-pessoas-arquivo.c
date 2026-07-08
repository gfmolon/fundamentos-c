// Guilherme Felipe Molon
// Criando arquivos de texto em C

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct {
    char nome[20];
    int ativo;
} PESSOA;

int main() {

    int qt, i;

    printf("Quantas pessoas você quer ler?\n");
    scanf("%d", &qt);
    PESSOA lista[qt];

   printf("Nome e se está ativo (1/0):\n"); 
    for (i=0; i<qt; i++) {
        scanf("%s", lista[i].nome);
        scanf("%d", &lista[i].ativo);
    }

    FILE *arq;
    arq = fopen("arquivo.txt", "wt");
    if (arq == NULL) {
        return 1;
    }

    fprintf(arq, "LISTA:\n");
    for(i=0; i<qt; i++) {
        fprintf(arq, "%s ", lista[i].nome);
        fprintf(arq, "%d\n", lista[i].ativo);
    }
    fprintf(arq, "Total de registros: %d\n", qt);
    fclose(arq);



    return 0;
}
