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
		printf("��ѡ��->\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:Seqlistdestory(&a); printf("�˳�����\n"); break;
		case 1:printf("��������ݣ�-1Ϊ�������룩\n");
			scanf("%d", &x);
			while (x != -1)
			{
				SeqlistpushFront(&a, x);
				scanf("%d", &x);
			}break;
		case 2:printf("��������ݣ�-1Ϊ�������룩\n");
			scanf("%d", &x);
			while (x != -1)
			{
				SeqlistPush(&a, x);
				scanf("%d", &x);
			}break;
		case 3: SeqlistDeleFront(&a); break;
		case 4:	SeqlistDeleback(&a); break;
		case 5:printf("�������ڵڼ���λ�ò���\n");
			scanf("%d", &x); SeqlistInert(&a, x); break;
		case 6:printf("������Ҫɾ�������λ��\n"); 
			scanf("%d", &x); SeqlistInsertDele(&a, 1); break;
		case 7:Seqlistprint(&a); break;
		}

	} while (input);
	return 0;
}