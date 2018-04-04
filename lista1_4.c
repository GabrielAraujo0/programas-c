/*Ler o primeiro nome e o último nome de uma pessoa com no
máximo 15 caracteres cada. Criar uma 3a. string (máximo 30
caracteres) que contém o primeiro e o último nome, separados
por espaços. Mostrar esta string.*/

#include<stdio.h>
#include<string.h>

void leitura();
void concatenar(char[],char[]);

char nome[15],sobrenome[15];

int main(void)
{
	leitura();
	concatenar(nome,sobrenome);
}

void leitura()
{
	printf("Digite o nome\n");
	fgets(nome,15,stdin);
	printf("Digite o sobrenome\n");
	fgets(sobrenome,15,stdin);
}

void concatenar(char nome[],char sobrenome[])
{
	char *esp = " ";
	strcat(nome,esp);
	strcat(nome,sobrenome);

	printf("Nome Completo: %s\n",nome );
}