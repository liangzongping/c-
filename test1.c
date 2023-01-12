#include"seqlist1.h"//主函数运行
void test1()
{
	STU a;
	SeqlistInit(&a);
	int i;
	for (i = 0; i < 100; i++)
	{
		SeqlistPush(&a, i);
	}
	/*SeqlistPush(&a, 1);
	SeqlistPush(&a, 2);
	SeqlistPush(&a, 3);
	SeqlistPush(&a, 4);*/
	Seqlistprint(&a);
	Seqlistdestory(&a);
}
int main()
{
	test1();
	return 0;
}