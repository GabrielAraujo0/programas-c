/*Definir uma senha para seu programa com 5 caracteres. Pedir
ao usuário que adivinhe sua senha (ler a senha). Permitir três
chances. Assim, que o usuário acertar, mostrar mensagem de
acerto. Se não acertar, mostrar mensagem de erro. Assim que
acertar, o programa deve ser finalizado.*/

#include<stdio.h>
#include<string.h>

void ler();
void testar();


char senha[5] = "cbrut";
char teste[5];

int main(void)
{

	ler();
	testar();
}

void ler()
{
	
	printf("Digite a senha\n");
	fflush(stdin);
	fgets(teste,5,stdin);
}

void testar()
{
	int x=0;
	do
	{
		if(strcmp(teste,senha)==0){
			printf("Bem vindo\n");
			x=50;
		}else{
			printf("Voce errou\n\n\n");
			ler();
		}
		x++;
	}while(x < 3);
}
