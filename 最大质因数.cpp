#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=0;i<=100;i++)
	{
		for(j=i;j>0;j--)
		{
			if(i%j==0)
			{
				for(k=2;k<j;k++)
				{
					if(j%k==0)
					break;
				}
				if(k==j)
				printf("%d的最大质因数为%d\n",i,j);
			}
		}
		
	}
	
	
	
	
	
	return 0;
 } 
