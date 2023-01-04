#include<stdio.h>
#include<string.h>
#include<assert.h>
void* mymemmove(void* a, void* b, size_t n)
{

	assert(a != NULL);
	assert(b != NULL);
	char* ret = (char* )a;
	if (b < a)
	{
		
		while (n--)
		{
			*((char*)a+n)  = *((char*)b+n);

		}
	}
	else
	{
		while (n--)
		{
			*(char*)a = *(char*)b;
			++(char*)a;
			++(char*)b;
		}
	}
	return ret;
}
int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//memmove(a+2, a , 20);
	mymemmove(a+2, a, 20);//1 2 3 2 3 4 5 6 9 10
	int i;
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
	return 0;
}