#include<stdio.h>
#include<string.h>
struct stu {
	char name[20];
	int age;
};
void* my_memcpy(void* a, void* b, size_t n)
{
	void *ret = a;
	while (n--)
	{
		*(char *)a=*(char*)b;
		++(char*)b;
		++(char*)a;
	}
	return ret;//返回目的地的起始地址
}
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int b[5] = { 0 };
	//memcpy(b, a, sizeof(a));
	/*struct stu a[2] = { {"liang",20},{"zhao",28} };
	struct stu b[2] = { 0 };*/
	//memcpy(b, a, sizeof(a));
	my_memcpy(b, a, sizeof(a));
	return 0;
}