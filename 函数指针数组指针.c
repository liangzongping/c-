#include<stdio.h>
//����ָ��ļ�Ӧ��
//void fun(void (*p)())
//{
//	printf("helloworld!!!");
//}
//void print()
//{
//	printf("text\n");
//	fun(print);
//}
//int main()
//{
//	print();
//	return 0;
//}
//����ָ�������Ӧ��;
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
void print(int(* (*p)[4])(int , int ),int n)
{
	int x, y;
	printf("������������\n");
	scanf_s("%d%d", &x, &y);
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d\n", (*p)[i](x,y));
	}
}
int main()
{
	int (*p[4])(int x, int y) = { add,sub,mul,div };
	print(p, 4);
	return 0;
}