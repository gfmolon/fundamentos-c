// Guilherme Felipe Molon
// Usando structs e atribuindo valores

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[20];
    int idade;
} PESSOA;

int maiorDeIdade(PESSOA p) {
    if (p.idade >= 18) {
        return 1;
    }
    return 0;
} 

int main() {

    char nomeDaPessoa[20];
    int idadeDaPessoa;
    
    printf("Qual o seu primeiro nome?\n");
    scanf("%s", nomeDaPessoa);
    printf("Qual a sua idade?\n");
    scanf("%d", &idadeDaPessoa);

    PESSOA p;
    strcpy(p.nome, nomeDaPessoa);
    p.idade = idadeDaPessoa;

    printf("%s tem %d anos.\n", p.nome, p.idade);
    if (maiorDeIdade(p)) {
        printf("Acesso liberado.\n");
    } else {
        printf("Acesso negado.\n");
    }

    return 0;
}
