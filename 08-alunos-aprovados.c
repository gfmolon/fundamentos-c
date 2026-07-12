// Guilherme Felipe Molon
// Cadastro de alunos e notas, gerando arquivo em txt

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char nome[20];
    float n1;
    float n2;
    float n3;
} ALUNO;

int calcularMedia(float n1, float n2, float n3) {
    float media = (n1+n2+n3)/3;
    if (media >= 6) {
        return 1;
    }
    return 0;
}

int main() {

    int qt, k=0;
    printf("Informe a quantidade de alunos:\n");
    scanf("%d", &qt);

    ALUNO *lista = (ALUNO*) malloc (qt*sizeof(ALUNO));
    if (lista == NULL) {
        printf("ERRO.\n");
        return 1;
    }

    int i;
    for(i=0; i<qt; i++) {
       ALUNO aluno;
       printf("Digite o nome do aluno: %d\n", i+1);
       scanf("%s", aluno.nome); 
       printf("Notas nas provas 1, 2 e 3:\n");
       scanf("%f %f %f", &aluno.n1, &aluno.n2, &aluno.n3);
       lista[k] = aluno;  
       k++;
    }

    int aprovados=0;
    int reprovados;
    FILE *arq;
    arq = fopen("aprovados.txt", "wt");
    if (arq == NULL) {
        printf("ERRO.\n");
        return 1;
    }
    printf("Alunos aprovados:\n");
    for(i=0; i<k; i++) {
        if (calcularMedia(lista[i].n1, lista[i].n2, lista[i].n3)) {
            fprintf(arq, "%s\n", lista[i].nome);
            aprovados++;
        }
    } 
    reprovados = k - aprovados;
    fprintf(arq, "Aprovados: %d\n", aprovados);
    fprintf(arq, "Reprovados: %d\n", reprovados);
    
    fclose(arq);

    return 0;
    
}
