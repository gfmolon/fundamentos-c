// Guilherme Felipe Molon
// Struct, ponteiro e arquivos txt final da copa apresentação

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[20];
    int camisa;
    int titular;
} JOGADOR;

typedef struct {
    char nome[20];
    JOGADOR acompanhante[2];
} ARTISTA;

void exibirShow(ARTISTA *m) {
    if (m == NULL) {
        return;
    }
    printf("Final da Copa do Mundo 2026:\n");
    printf("\n");
    printf("Artista: %s\n", m->nome);
    printf("Jogador 1: %s | Jogador 2: %s\n", m->acompanhante[0].nome, m->acompanhante[1].nome);
    printf("O show começou!!\n");

}

int main() {

    JOGADOR r9;
    strcpy(r9.nome, "Ronaldo");
    r9.camisa = 9;
    r9.titular = 1;

    JOGADOR r10;
    strcpy(r10.nome, "Ronaldinho");
    r10.camisa = 10;
    r10.titular = 1;

    ARTISTA m;
    strcpy(m.nome, "Madona");
    m.acompanhante[0] = r9;
    m.acompanhante[1] = r10;

    int escolha;
    printf("1 - Exibir\n");
    printf("2 - Salvar documento\n");
    scanf("%d", &escolha);

    if (escolha == 1) {
        exibirShow(&m);
    } else if (escolha == 2) {
        FILE *arq;
        arq = fopen("final.txt", "wt");
        if (arq == NULL) {
            printf("ERRO\n");
            return 1;
        }
        fprintf(arq, "%s\n", m.nome);
        fprintf(arq, "%s e %s\n", m.acompanhante[0].nome, m.acompanhante[1].nome);
        fprintf(arq, "Final Match!\n");
        fclose(arq);
    }

    else {
        printf("Programa encerrado\n");
        return 1;
    }

    

    return 0;
}
