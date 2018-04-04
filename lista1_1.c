/*Ler o nome (máximo 30 caracteres) e o endereço (máximo 50
caracteres) do aluno. Mostrar os dados de entrada na mesma
linha separados por hífen.o*/

#include<stdio.h>
#include<string.h>

void leitura();
void concatenar(char[],char[]);

char nome[30];
char end[50];

int main(void)
{
	
	leitura();
	concatenar(nome,end);
}

void leitura()
{
	printf("Digite o nome\n");
	fgets(nome,30,stdin);
	printf("Digite o endereco\n");
	fgets(end,50,stdin);
}

void concatenar(char nome[],char end[])
{
	char *hifen="-";

	strcat (nome,hifen);
	strcat(nome,end);

	printf("Resultado: %s\n", nome);
}