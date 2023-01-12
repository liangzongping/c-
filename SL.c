#include"SL.h"
void SeqlistInit(STU* p)
{
	p->a = NULL;
	p->capacity = p->size=0;
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
			printf("À©ÈÝÊ§°Ü\n");
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
