#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 2

struct stu {
	char name[20];
	int age;
	char sex[10];
	char num[20];
	char addr[20];
};
struct con {
	int sizet;
	int cap;
	struct stu *a;

};
void mune()
{
	printf("***********************\n");
	printf("**0-----�˳�����*******\n");
	printf("**1-----�����Ϣ*******\n");
	printf("**2-----��ӡ��Ϣ*******\n");
	printf("**3-----������Ϣ*******\n");
	printf("**4-----�޸���Ϣ*******\n"); 
	printf("**5-----ɾ����Ϣ*******\n");
	printf("***********************\n");
	printf("��ѡ��---->\n");
}
void initcon(struct con* p)
{
	p->a = (struct stu*)malloc(MAX * sizeof(struct stu));
	if (p->a == NULL)
	{
		return;
	}
	p->cap = MAX;
	p->sizet = 0;
	/*memset(p->a, 0, sizeof(p->a));
	p->sizet = 0;*/
}
void check(struct con* p)
{
	if (p->sizet == p->cap)
	{
		struct stu* ps = (struct stu*)realloc(p->a ,(MAX*2)*sizeof(struct stu));
		if (ps != NULL)
		{
			p ->a = ps;
			p->cap *= 2;
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}
	}
}
void add(struct con* p)
{
	check(p);
	printf("������������\n");
	scanf("%s", p->a[p->sizet].name);
	printf("���������䣺\n");
	scanf("%d", &(p->a[p->sizet].age));
	printf("�������Ա�\n");
	scanf("%s", p->a[p->sizet].sex);
	printf("������绰��\n");
	scanf("%s", p->a[p->sizet].num);
	printf("�������ַ��\n");
	scanf("%s", p->a[p->sizet].addr);
	p->sizet++;
	printf("��ӳɹ�\n");
	/*if (p->sizet > MAX)
	{
		printf("ͨѶ¼����\n");
	}
	else
	{
		printf("������������\n");
		scanf("%s", p->a[p->sizet].name);
		printf("���������䣺\n");
		scanf("%d", &(p->a[p->sizet].age));
		printf("�������Ա�\n");
		scanf("%s", p->a[p->sizet].sex);
		printf("������绰��\n");
		scanf("%s", p->a[p->sizet].num);
		printf("�������ַ��\n");
		scanf("%s", p->a[p->sizet].addr);
		p->sizet++;
	}*/
}
void print(struct con* p)
{
	int i;
	if (p->sizet == 0)
		printf("ͨѶ¼Ϊ��\n");
	else {
		printf("%-14s\t%-4s\t%-2s\t%-12s\t%-14s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		for (i = 0; i < p->sizet; i++)
			printf("%-14s\t%-4d\t%-2s\t%-12s\t%-14s\n", p->a[i].name, p->a[i].age, p->a[i].sex, p->a[i].num, p->a[i].addr);
	}
}
int fun(struct con* p, char* name)
{
	int i;
	for (i = 0; i < p->sizet; i++)
	{
		if (strcmp(p->a[i].name, name) == 0)
		{
			return i;
		}
	}	
	return -1;
}
void find(struct con* p)
{
	char name[20];
	printf("��������Ҫ�ҵ�����\n");
	scanf("%s", name);
	int i = fun(p, name);
	if (i==-1)
	{
		printf("ͨѶ¼��û�������\n");	
	}
	else
	{
		printf("�ҵ���\n");
		printf("%-14s\t%-4s\t%-2s\t%-12s\t%-14s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-14s\t%-4d\t%-2s\t%-12s\t%-14s\n", p->a[i].name, p->a[i].age, p->a[i].sex, p->a[i].num, p->a[i].addr);
	}
}
void alter(struct con* p)
{
	char name[20];
	printf("��������Ҫ�޸ĵ��˵�����\n");
	scanf("%s", name);
	int i = fun(p, name);
	if (i == -1)
	{
		printf("ͨѶ¼��û�������\n");

	}
	else
	{
		printf("�ҵ���\n");
		printf("���޸�\n");
		printf("������������\n");
		scanf("%s", p->a[i].name);
		printf("���������䣺\n");
		scanf("%d", &(p->a[i].age));
		printf("�������Ա�\n");
		scanf("%s", p->a[i].sex);
		printf("������绰��\n");
		scanf("%s", p->a[i].num);
		printf("�������ַ��\n");
		scanf("%s", p->a[i].addr);
		printf("�޸ĳɹ�\n");
	}
}
void dele(struct con* p)
{
	char name[20];
	printf("��������Ҫɾ�����˵�����\n");
	scanf("%s", name);
	int i = fun(p, name);
	if (i == -1)
	{
		printf("ͨѶ¼��û�������\n");

	}
	else
	{
		printf("�ҵ���\n");
		printf("��ɾ��\n");
		int j = i;
		for (j = i; j < p->sizet - 1; j++)
		{
			p->a[j] = p->a[j + 1];
		}
		p->sizet--;
		printf("ɾ���ɹ�\n");
	}
}
void xiaohui(struct con* p)
{
	free(p->a );
	p ->a = NULL;
}
int main()
{
	int input;
	struct con stu;
	initcon(&stu);
	do
	{	
		mune();
		scanf("%d", &input);
		/*system("cls");*/
		switch (input)
		{
		case 0:xiaohui(&stu); printf("�˳�����\n"); break;
		case 1:add(&stu); /*system("cls");*/ break;
		case 2:print(&stu); break;
		case 3:find(&stu); break;
		case 4:alter(&stu); break;
		case 5:dele(&stu); break;
		default:printf("ѡ�����������ѡ��\n");
		}		
	} while (input);
	return 0;
}