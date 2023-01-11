#include<stdio.h>
//int main()
//{
//	int a[7] = { 1,2,3,4,5,6,7 };
//	int i,j;
//	int k = 3;
//	int b[7] = {0};
//	int c[7] = { 0 };
//	/*for (i = 0; i < k; i++)
//	{
//		b[i] = a[i];
//	}
//	for (i = k,j=0; i < 7; i++,j++)
//	{
//		c[j] = a[i];
//	}
//	for (i=0; j < 7; i++,j++)
//	{
//		c[j] = b[i];
//	}
//	for (i = 0; i < 7; i++)
//		a[i] = c[i];
//	for (i = 0; i < 7; i++)
//		printf("%d ", a[i]);*/
//	/*for (i = k,j=0; i < 7; j++,i++)
//	{
//		b[j] = a[i];
//	}
//	for (i = 0; i < k; i++,j++)
//	{
//		b[j] = a[i];
//	}
//	for (i = 0; i < 7; i++)
//		a[i] = b[i];
//	for (i = 0; i < 7; i++)
//		printf("%d ", a[i]);*/
//	return 0;
//}#include<stdio.h>
//int main()
//{
//	int i, j;
//	int k = 3;
//	int a[7] = { 1,2,3,4,5,6,7 };
//	for (j = 0; j < k; j++)
//	{
//		int t = a[0];
//		for (i = 0; i < 6; i++)
//		{
//			a[i] = a[i + 1];
//		}
//		a[i] = t;
//	}
//	for (i = 0; i < 7; i++)
//		printf("%d ", a[i]);
//	return 0;
//
//}
void reverse(int a[],int n)
{
	int i;
	int t;
	for (i = 0; i < (n - 1) / 2; i++)
	{
		int t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
}
int main()
{
	int i;
	int a[7] = { 1,2,3,4,5,6,7 };
	reverse(a,7);
	reverse(a, 4);
	reverse(a + 4, 3);
	for (i = 0; i < 7; i++)
		printf("%d ", a[i]);
	return 0;
}