#include<stdio.h>
#include<stdlib.h>
void troca (int *,int *);

int main()
{int a,b;
printf("informe o valor para A\n");
scanf("%d",&a);
 printf("informe o valor para B\n");
scanf("%d",&b);
printf("Exibicao antes da chamada da funcao\n");
printf("o Valor de A eh: %d\n e o valor de B eh %d\n", a, b);
troca(&a,&b);
printf("Exibicao apos o retorno da funcao\n");
printf("o Valor de A eh: %d\n e o valor de B eh %d\n", a, b);
system("pause");
}
 void troca(int *x , int *y)
{
int aux;
aux=*x;
*x=*y;
*y=aux;
printf("Exibicao dentro da funcao\n");
printf("o Valor de A eh: %d\n e o valor de B eh %d\n", *x, *y);
}
