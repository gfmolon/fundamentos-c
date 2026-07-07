// Guilherme Felipe Molon
// Criando uma matriz e exibindo a diagonal principal

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 10

int main() {
    int i, j;
    int v[N][N];

    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
            scanf("%d",&v[i][j]);
        }
    }

    printf("Matriz criada:\n");
    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
            printf("%d ", v[i][j]);
        }
        printf("\n");
        // ou poderia usar um for usando v[i][i];
    }

    printf("Exibindo a diagonal principal.\n");
    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
            if (i == j) {
                printf("%d ", v[i][j]);
            }
        }
    }
    printf("\n");

    return 0;

}
