#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Digite um número positivo: ");
    scanf("%d", &num);
    printf("Divisores de %d: ", num);
    for(int i=1; i<=num; i++) {
        if(num % i == 0) {
            printf("%d ,", i);
        }
    }
    return 0;
}
