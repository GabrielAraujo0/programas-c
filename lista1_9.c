/*Ler o nome de uma pessoa com no máximo 50 caracteres e
mostrar o primeiro nome e a primeira letra.*/

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
	int i=0;
	char primeiro;
	char *espaco = " ";
	do
	{
		if(i==0){
			primeiro=frase[i];
		}
		printf("%c \n", frase [i] );
		i++;


	}while(frase[i] != *espaco);

	printf("Pimeira letra: %c \n", primeiro );

}