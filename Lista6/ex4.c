#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura de pilha
typedef struct {
    int capacidade;
    int topo;
    int *valores;
} Pilha;

// Função para criar uma pilha
Pilha *criarPilha(int capacidade) {
    Pilha *pilha = (Pilha *)malloc(sizeof(Pilha));
    pilha->capacidade = capacidade;
    pilha->topo = -1;
    pilha->valores = (int *)malloc(capacidade * sizeof(int));
    return pilha;
}

// Função para verificar se a pilha está vazia
int pilhaVazia(Pilha *pilha) {
    return (pilha->topo == -1);
}

// Função para verificar se a pilha está cheia
int pilhaCheia(Pilha *pilha) {
    return (pilha->topo == pilha->capacidade - 1);
}

// Função para inserir um elemento na pilha
void push(Pilha *pilha, int valor) {
    if (pilhaCheia(pilha)) {
        printf("Erro: pilha cheia\n");
        return;
    }
    pilha->valores[++pilha->topo] = valor;
}

// Função para remover o elemento do topo da pilha
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

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro: ");
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
