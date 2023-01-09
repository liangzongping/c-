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
	printf("1-----创建链表\n");
	printf("2-----输出链表\n");
	printf("3-----插入链表\n");
	printf("4-----删除\n");
	printf("0-----退出\n");
}
STU* create()
{
	int n=0;
	STU* head=NULL;
	STU* p1, * p2;
	p1 = p2 = (STU*)malloc(sizeof(STU));
	if (p1 != NULL)
	{
		printf("请输入第1个同学的学号\n");
		scanf("%d", &(p1->num));
		if (p1->num != 0)
		{
			n++;
			printf("请输入该同学的分数(学号为0表示结束输入)\n");
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
			printf("请输入第%d个同学的学号\n", n + 1);
			scanf("%d", &(p1->num));
			if (p1->num != 0)
			{
				n++;
				printf("请输入该同学的分数\n");
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
		printf("此链表为空\n");
	}
}
void myinsert(STU* head,int n)
{
	int num, score;
	printf("请输入该同学的学号与分数\n");
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
		printf("请输入-->\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:printf("退出程序\n"); break;
		case 1:head = create(); break;
		case 2:print(head); break;
		case 3:printf("请输入你要插入第几个后面\n"); scanf("%d", &n); myinsert(head,n); break;
		case 4:printf("请选择你要删除第几个\n"); scanf("%d", &n); head = mydele(head,n); break;
		default:printf("选择错误，请重新选择\n");
		}
	} while (input);
	return 0;
}