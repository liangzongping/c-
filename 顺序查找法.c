#include<stdio.h>

int _main()
{
	int i=0;
	int a[10] = {-1,20,12,-6,7,8,31,5,0,1};
	
	while (a[i] != 0)
	{
		i++;
		if (a[i] == 0)
			break;


	}printf("%d",i);
	return 0;
}