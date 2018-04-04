/*Fazer uma função que retorna a soma, a diferença e o produto entre dois números. */

#include<stdio.h>

int soma (int,int);
int multi (int,int);
int sub(int,int);

int main (void)
{
	int n1,n2,x,menu;
	do
	{	
		printf("Digite dois numeros\n");
		scanf("%d",&n1);
		scanf("%d",&n2);
		printf("**MENU**\n");
		printf("1 SOMA \n 2 SUBTRACAO \n 3 MULTIPLICACAO\n  0 CANCELAR/SAIR \n");
		scanf("%d",&menu);
		switch (menu)
		{
			case 1 : x=soma(n1,n2);
				break;
			case 2 : x=sub(n1,n2);
				break;
			case 3 : x=multi(n1,n2);
				break;

		}
		printf("Resultado %d \n",x );

	}while(menu !=0 );
}

int soma(int n1 ,int n2)
{
	int x;
	x = n1+n2;
	return x;
}

int sub(int n1 ,int n2)
{
	int x;
	x = n1-n2;
	return x;
}

int multi(int n1, int n2)
{
	int x;
	x = n1*n2;
	return x;
}
