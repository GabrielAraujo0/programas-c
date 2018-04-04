/*Ler uma frase com no máximo 20 caracteres e copiar para outra
string (copia). Mostrar o conteúdo da string copia e depois em
letras maiúsculas.*/

#include<stdio.h>
#include<string.h>

void leitura();
void copia(char[]);

char frase[20];

int main(void)
{
	
	leitura();
	copia(frase);
}

void leitura()
{
	printf("Digite uma frase\n");
	fgets(frase,20,stdin);
}

void copia(char frase[])
{
	char fraseCopia[20];
	strcpy(fraseCopia,frase);

	printf("Copia: %s\n",fraseCopia );
	printf("Maiusculas %s\n", strupr(fraseCopia) );
}
