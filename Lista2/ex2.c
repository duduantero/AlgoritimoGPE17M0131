#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    float sal, pres;

    printf("Informe o salário do trabalhador: \n");
    scanf("%f",&sal);

    printf("Informe o valor da prestação do empréstimo: \n");
    scanf("%f",&pres);

    if (pres > sal * 0.2){
        printf("Empréstimo não concedido.");
    } else {
    printf("Empréstimo concedido.");
    }
    return 0;
}
