// Guilherme Felipe Molon
// Cálculo de fatorial

#include <stdio.h>

int main() {

    int fat = 1;
    int i;

    int n;

    printf("Qual é o fatorial de:\n");
    scanf("%d", &n);

    if (n < 0) {
        printf("ERRO.\n");
        return 1;
    }

    for(i=1; i<=n; i++) {
        fat *= i;
    }

    printf("Fatorial de %d é %d\n", n, fat);

    return 0;
}
