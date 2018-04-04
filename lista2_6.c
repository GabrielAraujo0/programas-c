/*Fazer um programa em "C" que pregunta o nome, o endereço, o telefone e a idade de uma 
pessoa e monta um string com a seguinte frase: "Seu nome é ..., você tem ... anos, mora na rua ... e seu telefone é ... ." */

#include<stdio.h>
#include<string.h>

void ler();
void concatenar(char[],char[],int,int);

char nome[10],end[10];
int id, tel;

int main(void)
{
	ler();
	concatenar(nome,end,id,tel);
}

void ler()
{
	printf("Digite o nome\n");
	scanf("%s",nome);
	printf("Digite o end\n");
	scanf("%s",end);
	printf("Digite o num\n");
	scanf("%d",&tel);
	printf("Digite a idade\n");
	scanf("%d",&id);
}

void concatenar(char nome[],char end[],int id,int tel)
{
	char seu[]='Seu nome e';
	char vc[]=',voce tem';
	char anos[]='anos';
	char mora[]=',mora na rua';
	char tele[]=',e seu telefone e';

	strlen(seu,nome);
	strlen(seu,vc);
	printf("\n", );
	




}