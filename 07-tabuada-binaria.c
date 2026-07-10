// Guilherme Felipe Molon
// Criando e lendo arquivos binários em C, em uma tabuada

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    int n;
    int numeros[10];

    printf("Escolha um número para a tabuada.\n");
    scanf("%d",&n);

    if (n < 1 || n > 10) {
        printf("ERRO.\n");
        return 1;
    }

    int i, k=0;
    for(i=1; i<=10; i++) {
        numeros[k] = n * i;
        k++;
    }

    FILE *arq;
    arq = fopen("tabuada.bin", "wb");
    if (arq == NULL) {
        printf("ERRO.\n");
        return 1;
    }

    for(i=0; i<10; i++) {
        fwrite(&numeros[i], sizeof(numeros[i]), 1, arq);
    }

    fclose(arq);

    FILE *arq2 = fopen("tabuada.bin", "rb");
    if (arq2 == NULL) {
        printf("ERRO.\n");
        return 1;
    }
    int numero_lido;
    while(fread(&numero_lido, sizeof(numero_lido), 1, arq2) == 1) {
        printf("%d\n", numero_lido);
    }
    fclose(arq2);

    return 0;
}
