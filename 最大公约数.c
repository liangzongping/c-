#include<stdio.h>
int main()
{
	int b;
	int n, m;
	scanf_s("%d%d",&n,&m);
	if (n < m)
		b = n;
	else
		b = m;
	while (1)
	{
		if (n % b == 0 && m % b == 0)
			break;
		b--;
	}printf("%d",b);
	return 0;
}