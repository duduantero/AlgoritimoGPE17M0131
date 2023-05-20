#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>

// Função que incrementa o valor por meio de um ponteiro
void incrementar(int *numero) {
    (*numero)++; // Incrementa o valor apontado pelo ponteiro
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("Valor antes da chamada da função: %d\n", numero);

    incrementar(&numero); // Chama a função passando o endereço de memória do número

    printf("Valor após a chamada da função: %d\n", numero);

    return 0;
}
