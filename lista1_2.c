/*Ler dois nomes com no máximo 20 caracteres cada e mostrá-los
em ordem alfabética.*/

#include<stdio.h>
#include<string.h>

void leitura();
void ordem(char[],char[]);

char nome1[20];
char nome2[20];

int main (void)
{
	leitura();
	ordem(nome1,nome2);
}

void leitura()
{
	printf(" Digite o primeiro nome\n");
	fgets(nome1,20,stdin);
	printf(" Digite o segundo nome\n");
	fgets(nome2,20,stdin);
}

void ordem(char nome1[],char nome2[])
{
	if(strcmp(nome1,nome2)<0)
	{
		printf("%s\n%s ",nome1,nome2);
	}else
	{
		printf("%s\n%s",nome2,nome1);
	}
}