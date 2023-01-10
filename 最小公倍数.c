#include<stdio.h>
int amain()
{
	int b;
	int n, m;
	scanf_s("%d%d",&n,&m);
	if (n > m)
		b = n;
	else
		b = m;
	while(1)
	{
		if (b % n == 0 && b % m == 0)
		{
			break;
		}
		b++;
	}printf("%d",b);
	return 0;
}
