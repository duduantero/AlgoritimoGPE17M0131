#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ().{
    setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, nota3,nota4,media;

    printf("Informe a primeira nota: \n");
    scanf("%f",&nota1);

    printf("Informe a primeira nota: \n");
    scanf("%f",&nota2);

    printf("Informe a primeira nota: \n");
    scanf("%f",&nota3);

    printf("Informe a primeira nota: \n");
    scanf("%f",&nota4);

    media = (nota1 + nota2 + nota3 + nota4)/4;

    if (media == 0 && media <= 3){
        printf("Reprovado");
    }else if (media == 3.1 && media <= 6.9){
        printf("Recuperação");
    }else if (media > 6.9){
        printf("Aprovado");
    }

}
