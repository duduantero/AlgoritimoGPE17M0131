#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Questão 2 - Faça um programa que pergunte qual o raio de um círculo, calcule e imprima a sua área.*/

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	float raio,resultado;
	printf("Informe o raio de um circulo em cm: \n");
	scanf("%f",&raio);
	resultado = 3.14 *(raio * raio);
	printf("A área do circulo é : %2.f cm²",resultado);	
}
