#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Quest�o 4 - Fa�a um programa em que o usu�rio digite 4 notas, em seguida, calcule e imprima a m�dia entre eles*/

int main (){
	setlocale(LC_ALL, "Portuguese");
	float nota1,nota2,nota3,nota4,resultado;
	
	printf("Informe a 1� nota: ");
	scanf("%f",&nota1);
	
	printf("Informe a 2� nota: ");
	scanf("%f",&nota2);
	
	printf("Informe a 3� nota: ");
	scanf("%f",&nota3);
	
	printf("Informe a 4� nota: ");
	scanf("%f",&nota4);
	
	resultado = (nota1 + nota2 + nota3 + nota4)/4;
	printf("A m�dia das notas s�o %2.f",resultado);
}
