#include <stdio.h>
#include <stdlib.h>

// Defini��o da estrutura de pilha
typedef struct {
    int capacidade;
    int topo;
    int *valores;
} Pilha;

// Fun��o para criar uma pilha
Pilha *criarPilha(int capacidade) {
    Pilha *pilha = (Pilha *)malloc(sizeof(Pilha));
    pilha->capacidade = capacidade;
    pilha->topo = -1;
    pilha->valores = (int *)malloc(capacidade * sizeof(int));
    return pilha;
}

// Fun��o para verificar se a pilha est� vazia
int pilhaVazia(Pilha *pilha) {
    return (pilha->topo == -1);
}

// Fun��o para verificar se a pilha est� cheia
int pilhaCheia(Pilha *pilha) {
    return (pilha->topo == pilha->capacidade - 1);
}

// Fun��o para inserir um elemento na pilha
void push(Pilha *pilha, int valor) {
    if (pilhaCheia(pilha)) {
        printf("Erro: pilha cheia\n");
        return;
    }
    pilha->valores[++pilha->topo] = valor;
}

// Fun��o para remover o elemento do topo da pilha
int pop(Pilha *pilha) {
    if (pilhaVazia(pilha)) {
        printf("Erro: pilha vazia\n");
        return -1;
    }
    return pilha->valores[pilha->topo--];
}

int main() {
    int num1, num2;
    Pilha *pilha = criarPilha(2);

    printf("Digite o primeiro n�mero inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo n�mero inteiro: ");
    scanf("%d", &num2);

    push(pilha, num1);
    push(pilha, num2);

    printf("Valores na pilha:\n");
    while (!pilhaVazia(pilha)) {
        int valor = pop(pilha);
        printf("%d\n", valor);
    }

    free(pilha->valores);
    free(pilha);

    return 0;
}
