#include"SL.h"
void test()
{
	STU a;
	SeqlistInit(&a);
	int i;
	for(i=0;i<10;i++)
	SeqlistPush(&a, i);
	/*SeqlistPush(&a, 2);
	SeqlistPush(&a, 3);
	SeqlistPush(&a, 4);*/
	SeqlistpushFront(&a, 10);
	SeqlistpushFront(&a, 20);
	SeqlistpushFront(&a, 30);
	SeqlistpushFront(&a, 40);
	Seqlistprint(&a);
	Seqlistdestory(&a);
}
int main()
{
	test();
	return 0;
}