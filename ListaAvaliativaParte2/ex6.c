#include <stdio.h>

int main() {
    int i, sum = 0;

    for (i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    printf("A soma dos numeros naturais abaixo de 1000 que sao multiplos de 3 ou 5 e: %d", sum);

    return 0;
}
