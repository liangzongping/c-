#include<stdio.h>
int Add(int x,int y)
{
	return x+y;
}
int Sub(int x,int y)
{
	return x-y;
}
int Mul(int x,int y)
{
	return x*y;
}
int Div(int x,int y)
{
	return x/y;
}
int main()
{
	int i; 
	int (*p[4])(int x,int y)={Add,Sub,Mul,Div};// int (*p)(int x,int y);
	for(i=0;i<4;i++)
	printf("%d\n",p[i](4,6));//10,-2,24,0; 
	return 0;
}
