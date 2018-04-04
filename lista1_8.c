/*Ler uma frase (máximo 45 caracteres) e mostrar a quantidade
de a’s (maiúsculos e minúsculos).*/

#include<stdio.h>
#include<string.h>

void ler();
void contar(char[]);

char frase[45];

int main(void)
{
	ler();
	contar(frase);
}

void ler()
{
	printf("Digite uma frase:\n");
	fgets(frase,45,stdin);
}

void contar(char frase[])
{
	int i,contaa=0,contA=0;
	for(i=strlen(frase);i>=0;i--)
	{
		if(frase[i]=='A')
		{
			contA++;
		}
		else
		{
			if(frase[i]=='a')
			{
				contaa++;
			}
		}
	}
	printf("Numero de a minusculos: %d\n", contaa );
	printf("Numedo de a maiusculo %d\n",contA );
}