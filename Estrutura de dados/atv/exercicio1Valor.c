#include<stdio.h>

void func(int,int);

int x=1,y=2;

int main()
{
	int x=10, y=20;
	printf("x = %d e y = %d \n", x,y);
	func(y , x + y);
	func(x, y);
	printf("x = %d e y = %d \n", x , y);
}

void func(int a, int b)
{
	a=1;
	b=a+b;
	printf("x = %d e y = %d\n",x,y);
	x = (x > a ) ? 6 : b;
	printf("x = %d e y = %d\n", x, y);
}

