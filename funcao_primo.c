// Guilherme Felipe Molon
// Calcular número primo em uma função

#include <stdio.h>

int ehPrimo(int n) {
    int i;
    int cont=0;
    for(i=1; i<= n; i++) {
        if (n % i == 0) {
            cont++;
        }
    }
    if (cont == 2) {
        return 1;
    }
    return 0;
}


int main() {

    int numero;

    printf("Digite um número:\n");
    scanf("%d", &numero);

    if(ehPrimo(numero)) {
        printf("%d é primo.\n", numero);
    } else {
        printf("%d não é primo.\n", numero);
    }

    return 0;
}
