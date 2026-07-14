// Guilherme Felipe Molon
// Copa do Mundo em C

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

typedef struct {
    char nome[20];
} TIME;

typedef struct {
    TIME t1;
    TIME t2;
    TIME ganhador;
} JOGO;

TIME jogoRealizado(TIME t1, TIME t2) {
    int numero = rand() % 2;

    if (numero == 0) {
        return t1;
    }

    return t2;
}

int main() {

    srand(time(NULL));

    TIME lista[4];

    TIME t1;
    strcpy(t1.nome, "França");

    TIME t2;
    strcpy(t2.nome, "Espanha");

    TIME t3;
    strcpy(t3.nome, "Inglaterra");

    TIME t4;
    strcpy(t4.nome, "Argentina");

    lista[0] = t1;
    lista[1] = t2;
    lista[2] = t3;
    lista[3] = t4;

    JOGO semifinal1;

    semifinal1.t1 = lista[0];
    semifinal1.t2 = lista[1];

    semifinal1.ganhador = jogoRealizado(
        semifinal1.t1,
        semifinal1.t2
    );

    printf("Semifinal 1\n");
    printf("%s x %s\n",
           semifinal1.t1.nome,
           semifinal1.t2.nome);

    printf("Vencedor: %s\n\n",
           semifinal1.ganhador.nome);

    JOGO semifinal2;

    semifinal2.t1 = lista[2];
    semifinal2.t2 = lista[3];

    semifinal2.ganhador = jogoRealizado(
        semifinal2.t1,
        semifinal2.t2
    );

    printf("Semifinal 2\n");
    printf("%s x %s\n",
           semifinal2.t1.nome,
           semifinal2.t2.nome);

    printf("Vencedor: %s\n\n",
           semifinal2.ganhador.nome);

    JOGO final;

    final.t1 = semifinal1.ganhador;
    final.t2 = semifinal2.ganhador;

    final.ganhador = jogoRealizado(
        final.t1,
        final.t2
    );

    printf("Final\n");
    printf("%s x %s\n",
           final.t1.nome,
           final.t2.nome);

    printf("Campeão: %s\n",
           final.ganhador.nome);

    return 0;
}
