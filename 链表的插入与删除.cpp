#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
typedef struct stu{
	int num;
	int score;
	struct stu* next;
}STU;
void menu()
{
	printf("1-----��������\n");
	printf("2-----�������\n");
	printf("3-----��������\n");
	printf("4-----ɾ��\n");
	printf("0-----�˳�\n");
}
STU* create()
{
	int n=0;
	STU* head=NULL;
	STU* p1, * p2;
	p1 = p2 = (STU*)malloc(sizeof(STU));
	if (p1 != NULL)
	{
		printf("�������1��ͬѧ��ѧ��\n");
		scanf("%d", &(p1->num));
		if (p1->num != 0)
		{
			n++;
			printf("�������ͬѧ�ķ���(ѧ��Ϊ0��ʾ��������)\n");
			scanf("%d", &(p1->score));
			head=p1;
		}
		else
		{
			free(p1);
			return head;
		}
	}
	else
	{
		return head;
	}
	while (1)
	{
		p1 = (STU*)malloc(sizeof(STU));
		if (p1 != NULL)
		{
			printf("�������%d��ͬѧ��ѧ��\n", n + 1);
			scanf("%d", &(p1->num));
			if (p1->num != 0)
			{
				n++;
				printf("�������ͬѧ�ķ���\n");
				scanf("%d", &(p1->score));
				p2->next = p1;
				p2 = p1;
			}
			else
			{
				free(p1);
				p2->next = NULL;
				return head;
			}

		}
	}
}
void print(STU* p)
{
	if (p != NULL)
	{
		while (p!= NULL)
		{
			printf("%d:	%d\n", p->num, p->score);
			p = p->next;
		}
	}
	else
	{
		printf("������Ϊ��\n");
	}
}
void myinsert(STU* head,int n)
{
	int num, score;
	printf("�������ͬѧ��ѧ�������\n");
		scanf("%d%d", &num, &score);
	int i=1;
	while (i < n && head->next != NULL)
	{
		i++;
		head = head->next;
	}
	STU* p;
	p = (STU*)malloc(sizeof(STU));
	if (p != NULL)
	{
		p->num = num;
		p->score = score;
		p->next = head->next;
		head->next = p;
	}
}
STU* mydele(STU *head,int n)
{
	int i=1;
	STU* p1=head, *p2;
	if (n == 1)
	{
		head = p1->next;
		free(p1);
	}
	else if (n > 1)
	{
		while (i < (n - 1) && p1->next->next != NULL)
		{
			i++;
			p1 = p1->next;
		}
		p2 = p1->next;
		p1->next = p2->next;
		free(p2);
	}
	return head;
}
int main()
{
	STU* head=NULL;
	int n;
	int input;
	do
	{
		menu();
		printf("������-->\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:printf("�˳�����\n"); break;
		case 1:head = create(); break;
		case 2:print(head); break;
		case 3:printf("��������Ҫ����ڼ�������\n"); scanf("%d", &n); myinsert(head,n); break;
		case 4:printf("��ѡ����Ҫɾ���ڼ���\n"); scanf("%d", &n); head = mydele(head,n); break;
		default:printf("ѡ�����������ѡ��\n");
		}
	} while (input);
	return 0;
}