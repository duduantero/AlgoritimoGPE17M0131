#include <stdio.h>

// Função que incrementa o valor por meio de um ponteiro
void incrementar(int *numero) {
    (*numero)++; // Incrementa o valor apontado pelo ponteiro
}

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("Valor antes da chamada da função: %d\n", numero);

    incrementar(&numero); // Chama a função passando o endereço de memória do número

    printf("Valor após a chamada da função: %d\n", numero);

    return 0;
}
