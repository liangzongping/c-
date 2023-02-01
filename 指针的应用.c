#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[] = "abcdef";
//	printf("%d\n", strlen( & a));
//	printf("%d\n", strlen(  & a + 1));
//	printf("%d\n", strlen((&a + 2)));
//	return 0;
//}
#include<stdio.h>
int main()
{
	int a[2][4] = { 1,2,3,4,5,6,7,8 };

	printf("%d", sizeof(a));
}