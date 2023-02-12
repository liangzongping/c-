#include"contact.h"
int main()
{
	
	int input;
	con* head = NULL;

	do
	{
		int n=0;
		int k;
		menu();
		scanf("%d", &input);
		switch (input)
		{
			//销毁也是修改head,也要传二级指针
		case 0:condestroy(&head); printf("退出程序\n"); break;
		case 1:
			printf("请输入个人的信息(序号0表示结束输入)\n");
			//需要修改head,而head本身为指针，故要传二级指针
			createcon(&head);
			break;
		case 2:conprint(head); break;
		case 3:
			printf("请输入删除第几项\n");
			scanf("%d", &k);
			condele(&head, k); break;
		case 4:
			printf("请输入在哪个序号后插入\n");
			scanf("%d", &k);
			conInsert(&head, k);
			break;
		case 5:
			printf("请输入修改第几项\n");
			scanf("%d", &k);
			conrevise(&head, k);
			break;
		case 6:consave(head);
			break;
		case 7:printf("请输入加载人数\n");
			scanf("%d", &k);
			conload(&head, k);
			break;
		}
	} while (input);
}