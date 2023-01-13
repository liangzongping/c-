#include"SL.h"
void SeqlistInit(STU* p)
{
	p->a = (int*)malloc(2*sizeof(int));
	if(p->a==NULL)
	{
		return;
	}
	p->capacity = 2;
	p->size = 0;
	/*p->a = NULL;
	p->capacity = p->size=0;*/
}
void SeqlistPush(STU* p, int x)
{
	Seqlistcheckcapacity( p);
	p->a[p->size] = x;
	p->size++;
}
void Seqlistprint(STU* p)
{
	int i;
	for (i = 0; i < p->size; i++)
		printf("%d ", p->a[i]);
}
void Seqlistdestory(STU* p)
{
	free(p->a);
	p->a = NULL;
	p->capacity = p->size = 0;
}
void Seqlistcheckcapacity(STU* p)
{
	if (p->capacity == p->size)
	{
		int newcapacity = p->capacity + 2;
		int* t=(int *)realloc(p->a ,newcapacity*sizeof(int ));
		if (t == NULL)
		{
			printf("扩容失败\n");
			exit(-1);
		}
		p->a = t;
		p->capacity = newcapacity;
	}
}
void SeqlistpushFront(STU* p, int x)
{
	int end = p->size - 1;
	Seqlistcheckcapacity(p);
	while (end >= 0)
	{
		p->a[end + 1] = p->a[end];
		end--;
	}
	p->a[0] = x;
	p->size++;
}
void SeqlistDeleback(STU* p)
{
	if (p->size > 0)
	{
		p->size--;
	}
}
void SeqlistDeleFront(STU* p)
{
	if (p->size > 0)
	{
		int i = 0;
		for (i = 0; i < p->size - 1; i++)
		{
			p->a[i] = p->a[i + 1];
		}
		p->size--;
	}
}
void SeqlistInsertDele(STU* p, int x)
{
	if (p->size > 0)
	{
		int i = 0;
		while (i < x)

		{
			i++;
		}
		for (; i < p->size; i++)
			p->a[i] = p->a[i + 1];
		p->size--;
	}
}
void SeqlistInert(STU* p,int x)
{
	assert(x >= 0 && x < p->size);
	Seqlistcheckcapacity(p);
	int k;
	printf("请输入你要插入的数\n");
	scanf("%d", &k);
	int i=0;
	while (i < x)
	{
		i++;
	}
	for (i = p->size-1; i >= x; i--)
		p->a[i + 1] = p->a[i];
	p->a[x] = k;
	p->size++;
	
}
void menu()
{
	printf("\n************************\n");
	printf("***1.头插     2.尾插****\n");
	printf("***3.头删     4.尾删****\n");
	printf("**5.插入    6.删除某个数\n");
	printf("* 7打印     0.退出******\n");
	printf("************************\n");

}