/*Ler uma palavra com no máximo 10 caracteres e mostrá-la na
ordem inversa.*/

#include<stdio.h>
#include<string.h>

void Ler();
void Inverte(char[]);

char palavra[10];

int main(void)
{
	Ler();
	Inverte(palavra);

}

void Ler ()
{
	printf("Digite uma palavra\n");
	fgets(palavra,10,stdin);
}

void Inverte(char palavra[])
{
	int i;
	char aux;
	for(i=strlen(palavra);i>=0;i--)
	{
		printf("%c \n", palavra[i]);
	}
}