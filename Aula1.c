#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Questão 1 - Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, adiciona-
se ao custo o valor do frete e despesas eventuais (também solicitadas pelo teclado). Para concluir, o programa pergunta
qual o valor de venda e indica a percentagem de lucro da mercadoria.*/

int main(){
	setlocale(LC_ALL, "");
	int num1,num2,soma;
	
	printf("Informe um número inteiro: \n");
	scanf("%d",&num1);
	system("cls");
	
	printf("Informe outro número inteiro: \n ");
	scanf("%d",&num2);
	system("cls");
	
	soma = num1 + num2;
	gotoxy(24,11);
	printf("A soma dos valores é %2.d",soma);	
 
}

