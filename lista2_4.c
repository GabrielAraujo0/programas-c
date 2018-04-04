/*Fazer uma função para ler 3 notas de um aluno e retornar sua média. */
#include<stdio.h>

float media(float,float,float);

int main(void)
{
	float n1,n2,n3,r;
	printf("Digite 3 notas do aluno\n");
	scanf("%f",&n1);
	scanf("%f",&n2);
	scanf("%f",&n3);
	r=media(n1,n2,n3);
	printf("Resultado %.2f \n", r);
}

float media (float n1, float n2, float n3 )
{
	float r;
	r=(n1+n2+n3)/3;
	return r;
}