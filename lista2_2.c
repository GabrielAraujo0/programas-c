/*Fazer uma função em "C" que retorna a razão entre dois números. */

#include<stdio.h>

int calcula (float,float);

int main (void)
{
	float n1,n2,r;
	printf("Digite dois numeros\n");
	scanf("%f",&n1);
	scanf("%f",&n2);
	r=calcula(n1,n2);
	printf("Resultado: %.2f\n", r);
}

int calcula (float n1,float n2)
{
	float x;
	x=n1/n2;
	return x;
}