#include"SL.h"
int main()
{
	STU a;
	SeqlistInit(&a);
	int x;
	int input;
	do
	{
		
		menu();
		printf("请选择->\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:Seqlistdestory(&a); printf("退出程序\n"); break;
		case 1:printf("请插入数据（-1为结束输入）\n");
			scanf("%d", &x);
			while (x != -1)
			{
				SeqlistpushFront(&a, x);
				scanf("%d", &x);
			}break;
		case 2:printf("请插入数据（-1为结束输入）\n");
			scanf("%d", &x);
			while (x != -1)
			{
				SeqlistPush(&a, x);
				scanf("%d", &x);
			}break;
		case 3: SeqlistDeleFront(&a); break;
		case 4:	SeqlistDeleback(&a); break;
		case 5:printf("请输入在第几个位置插入\n");
			scanf("%d", &x); SeqlistInert(&a, x); break;
		case 6:printf("请输入要删除对象的位置\n"); 
			scanf("%d", &x); SeqlistInsertDele(&a, 1); break;
		case 7:Seqlistprint(&a); break;
		}

	} while (input);
	return 0;
}