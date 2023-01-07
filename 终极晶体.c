#include<stdio.h>
int main()
{
	int n;
	printf("请输入高度大小：");//高度指的是第一行到中间那一行的距离。
	scanf_s("%d",&n);
	int i, j, k;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
			printf(" ");
		for (k = 1; k <= 2 * i - 1; k++)
			printf("*");
		printf("\n");
	}int a, b, c;
	for (a = 1; a <= n - 1; a++)
	{
		for (b = 1; b <= a; b++)
			printf(" ");
		for (c = 1; c <= (-2) * a + 2 * n - 1; c++)
			printf("*");
		printf("\n");
	}
	return 0;
}