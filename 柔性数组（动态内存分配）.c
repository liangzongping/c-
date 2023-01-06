#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>
//struct s {
//	int a;
//	int b[];
//};
//int main()
//{
//	int i;
//	struct s* p = (struct s*)malloc(sizeof(struct s) + 5 * sizeof(int));
//	if (p != NULL)
//	{
//		for (i = 0; i < 5; i++)
//		{
//			p->b[i] = i;
//		}
//	}
//	else
//	{
//		printf("%s", strerror(errno));
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", p->b[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
struct s {
	int a;
	int* b;
};
int main()
{
	struct s* p = (struct s*)malloc(sizeof(struct s));
	if (p != NULL)
	{
		p->b = (int*)malloc(5 * sizeof(int));
		if (p->b != NULL)
		{
			int i;
			for (i = 0; i < 5; i++)
			{
				*(p->b + i) = i;
			}
		}
		int j;
		for (j = 0; j < 5; j++)
			printf("%d ", *(p->b + j));
		free(p->b);
		p->b = NULL;
		free(p);
		p = NULL;
		
	}
	return 0;
}