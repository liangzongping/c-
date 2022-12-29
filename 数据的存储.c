#include<stdio.h>
int main()
{
	int n = 12;
	//0 00000000 00000000000000000001100
	
	float* p = (float*)&n;
	printf("%d\n", n);//12
	printf("%f\n", *p);//0.0000000
	*p = 12.0;
	//1100.0
	//1.100*2^3
	//0 10000010 10000000000000000000000
	printf("%d\n", n);
	printf("%f\n", *p);
	return 0;
}