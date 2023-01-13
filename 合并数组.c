#include<stdio.h>
int main()
{
	int a[6] = { 1,6,8,0,0,0 };
	int b[3] = { 2,5,7 };
	int i = 2, j = 2;
	int k = 5;
	while (i >= 0 && j >= 0)
	{
		if (a[i] > b[j])
		{
			a[k--] = a[i--];
		}
		else
		{
			a[k--] = b[j--];
		}

	}
	while (j >= 0)
	{
		a[k--] = b[j--];
	}
	for (i = 0; i < 6; i++)
		printf("%d ", a[i]);
	return 0;
}