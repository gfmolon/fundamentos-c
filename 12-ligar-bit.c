// Guilherme Felipe Molon
// Exercício de bitwise com máscara

#include <stdio.h>

void mudarBits(unsigned short int numero, unsigned short int *numeroAlterado) {
    *numeroAlterado = numero | (1 << 2);
}

int main() {

    unsigned short int numero = 8;
    unsigned short int numeroAlterado;

    mudarBits(numero, &numeroAlterado);

    printf("Número original: %hu\n", numero);
    printf("Número alterado: %hu\n", numeroAlterado);

    return 0;
}
