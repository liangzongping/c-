#include<stdio.h>
int abmain()
{
	int a, b, c;
	scanf_s("%d%d",&a,&b);
	while (b)
	{
		c = a % b;
		a = b;
		b = c;
	}
	printf("%d",a);
	return 0;
}