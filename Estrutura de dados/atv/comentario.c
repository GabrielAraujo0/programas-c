#include<stdio.h>
#include<stdlib.h>

int main() //função principal
{
	int y, *p, x; //declaração das variáveis: y e x; e do ponteiro *p;
	y = 0;        //atribuição do valor zero a variável y
	p = &y;       //o ponteiro p recebe o valor da variável y, neste caso é igual a 0
	x = *p;       //a variável x recebe o valor do endereço de memória que *p está apontando, neste caso é igual a 0
	x = 4;        //o valor da variável x foi substituído pelo valor 4.
	(*p)++;       //acontece aqui o incremento do conteúdo do ponteiro, que passa a ser 1
	x--;          //decremento do valor da variável x, que passa a ser 3.
	(*p) += x;    // (*p) recebe a soma do seu valor com o valor da variável x, que será 3+1 = 4.
	printf ("y = %d\n", y); //o valor de y é 4.
	return(0);
}
