#include<stdio.h>
int main()
{
	
	int a[6] = { 1,2,3,3,4,8 };
	int i = 0,j=1;
	int k=0;
	while (j < 6)
	{
		if (a[i] == a[j])
		{
			j++;
		}
		else
		{
			a[k] = a[i];
			k++;
			i = j;
			j++;
		}
	}
	a[k] = a[i];
	k++;
	for (i = 0; i < k; i++)
		printf("%d,",a[i]);
	return 0;
}