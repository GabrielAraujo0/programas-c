/*Ler o nome de três estados com no máximo 15 caracteres cada
e mostrá-los em ordem alfabética.*/

#include<stdio.h>
#include<string.h>

void ler();
void alfabetica(char[],char[],char[]);

char estado1[15],estado2[15],estado3[15];

int main(void)
{
	ler();
	alfabetica(estado1,estado2,estado3);
}

void ler()
{
	printf("Digite primeiro estado:\n");
	fgets(estado1,15,stdin);
	printf("Digite segundo estado:\n");
	fgets(estado2,15,stdin);
	printf("Digite terceiro estado:\n");
	fgets(estado3,15,stdin);
}

void alfabetica(char estado1[15],char estado2[15],char estado3[15])
{
	for(i=0;)
	if((strcmp(estado1,estado2)>0) && (strcmp(estado1,estado3)>0))
	{
		printf("Primeiro\n",estado1);
	}

}