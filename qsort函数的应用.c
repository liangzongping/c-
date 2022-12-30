#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stu {
	char a[20];
	int age;
};
int cmp_struct(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->a, ((struct stu*)e2)->a);//通过结构体指针直接应用数组成员
}
//int cmp_struct(const void* e1, const void* e2)
//{
//	return (*(struct stu*)e1).age - (*(struct stu*)e2).age;
//}
int main()
{
	struct stu aa[2] = { {"liang",20},{"chao",18} };
	int i;
	qsort(aa, 2, sizeof(aa[0]), cmp_struct);
	struct stu* p=aa;
	for (i = 0; i < 2; i++)
	{
		printf("%s\n", (p+i)->a );
	}
	return 0;
}


//int cmp_float(const void* e1, const void* e2)
//{
//	if (*(float*)e1 == *(float*)e2)
//		return 0;
//	else if (*(float*)e1 > *(float*)e2)
//		return 1;
//	else
//		return -1;
//}
//int main()
//{
//	int i;
//	float a[10] = { 1.,2.,3.,4.,5.,6.,7.,-2.,-3.,-10. };
//	int sz = sizeof(a) / sizeof(a[0]);
//	qsort(a, sz, sizeof(a[0]), cmp_float);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f,", a[i]);
//	}
//}