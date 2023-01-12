#include"seqlist1.h"//¸÷ÖÖº¯Êý
void SeqlistInit(STU* p)
{
	p->a = (int*)malloc(2 * sizeof(int));
	p->size = 0;
	p->capacity = 2;
}
void SeqlistPush(STU* p, int x)
{
	Seqlistcheckcapacity(p);
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
	if (p->size == p->capacity)
	{
		int newcapacity = p->capacity * 2;
		int* tmp = (int*)realloc(p->a, newcapacity * sizeof(int));
		if (tmp == NULL)
		{
			printf("À©ÈÝÊ§°Ü\n");
			exit(-1);
		}
	}
}
void SeqlistpushFront(STU* p, int x)
{
	int end = p->size - 1;
	Seqlistcheckcapacity(p);
	while (end > 0)
	{
		p->a[end + 1] = p->a[end];
		end--;
	}
	p->a[0] = x;
	p->size--;
}