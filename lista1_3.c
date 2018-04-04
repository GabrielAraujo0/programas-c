/*Ler duas palavras com no máximo 10 caracteres cada e mostrar
se são iguais ou diferentes.*/

#include<stdio.h>

void leitura();
void igual(char[],char[]);

char nome1[10],nome2[10];

int main(void)
{
	
	
	leitura();
	igual(nome1,nome2);
}

void leitura()
{
	printf("Digite o nome1\n");
	fgets(nome1,10,stdin);
	printf("Digite o nome2\n");
	fgets(nome2,10,stdin);
}

void igual(char nome1[],char nome2[])
{
	if(strcmp(nome1,nome2)==0)
	{
		printf("Nomes Iguais\n");
	}else
	{
		printf("Nomes diferentes\n");
	}
}
	
