#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Questão 4 - Faça um programa em que o usuário digite 4 notas, em seguida, calcule e imprima a média entre eles*/

int main (){
	setlocale(LC_ALL, "Portuguese");
	float nota1,nota2,nota3,nota4,resultado;
	
	printf("Informe a 1ª nota: ");
	scanf("%f",&nota1);
	
	printf("Informe a 2ª nota: ");
	scanf("%f",&nota2);
	
	printf("Informe a 3ª nota: ");
	scanf("%f",&nota3);
	
	printf("Informe a 4ª nota: ");
	scanf("%f",&nota4);
	
	resultado = (nota1 + nota2 + nota3 + nota4)/4;
	printf("A média das notas são %2.f",resultado);
}
