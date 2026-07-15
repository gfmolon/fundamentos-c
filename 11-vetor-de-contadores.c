// Guilherme Felipe Molon
// Simples vetor de contadores

#include <stdio.h>

int main() {

    int resultados[6] = {0};
    int numero = 5;

    resultados[numero]++;

    for (int i = 0; i < 6; i++) {
        printf("Número %d: %d ocorrência(s)\n", i, resultados[i]);
    }

    return 0;
}
