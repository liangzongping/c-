#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>
int main()
{
	int i;
	/*int* p = (int*)malloc(INT_MAX);
	if (p == NULL)
	{
		printf("%s", strerror(errno));
	}
	else
	{
		
		for (i = 0; i < 10; i++)
		{
			printf("%d,",*(p+i));
		}
	}*/
	
	/*int* p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("%s", strerror(errno));
	}
	else
	{
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}*/
	int* p = (int*)malloc(20);
	if (p == NULL)
	{
		printf("%s", strerror(errno));
	}
	else
	{

		for (i = 0; i < 5; i++)
		{
			*(p + i) = i;
		}
	}
	int* p2 = (int*)realloc(p,40);
	if (p2 == NULL)
	{
		printf("%s", strerror(errno));
	}
	else
	{
		p = p2;
		for (i = 5; i < 10; i++)
		{
			*(p + i) = i;
		}
	}
	for(i=0;i<10;i++)
	printf("%d ", p[i]);
	free(p2);
	return 0;
}