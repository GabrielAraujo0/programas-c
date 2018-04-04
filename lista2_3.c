/*Fazer uma rotina em "C" que calcule a média dos valores de um vetor; o menor valor do vetor; - o maior valor do vetor */

#include<stdio.h>

void media(int[],int);

int main(void)
{
	int tam,x;
	printf("Digite tamanho do vetor\n");
	scanf("%d",&tam);
	int vetor[tam];
	printf("Preencha o vetor\n");
	for(x=0;x<tam;x++)
	{
		scanf("%d",&vetor[x]);
	}
	media(vetor,tam);

}

void media(int vetor[],int tam)
{
	int x,soma=0,r,menor=1230,maior=0;
	for(x=0;x<tam;x++)
	{
		soma=soma+vetor[x];
		if(vetor[x]>maior)
			maior=vetor[x];
		if(vetor[x]<menor)
			menor=vetor[x];
	}
	r=soma/tam;
	printf("Media do vetor %d Maior: %d Menor %d \n", r,maior,menor );

}