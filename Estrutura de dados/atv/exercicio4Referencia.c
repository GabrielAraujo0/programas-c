#include<stdio.h>

void f(int*);
void g();

int x = 3, y = 4;//Globais

int main(){
	int x = 1;//Locais
	int y = 2;//Locais
	printf("%d %d\n",x,y);
	f(&x);
	printf("%d %d\n",x,y);
	g();
	printf("%d %d\n",x,y);
}

void f(int*y){
	*y = *y+x;
	printf("%d %d\n",x,*y);
}
void g(){
	int x = 5;//Locais
	printf("%d %d\n",x,y);
	f(&x);
	printf("%d %d\n",x,y);
}
