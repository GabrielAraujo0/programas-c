/*Ler uma frase com no máximo 30 caracteres e mostrar a
quantidade de caracteres e mostrar a frase em letras
maiúsculas.*/

#include <stdio.h>
#include <string.h>


void leitura();
void analisar(char[]);

char frase[50];

int main(void)
{
	leitura();
	analisar(frase);
}

void leitura()
{
	printf("Digite a frase\n");
	fgets(frase,50,stdin);
}

void analisar(char frase[])
{
	
	printf("Numero de letras : %d \n",strlen(frase));
    printf("Maiuscula: %s \n",strupr(frase));
    
}
