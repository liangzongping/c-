#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define max 1000
struct stu {
	char name[20];
	int age;
	char sex[10];
	char num[20];
	char addr[20];
};
struct con {
	struct stu a[max];
	int sizet;
};
void mune()
{
	printf("***********************\n");
	printf("**0-----�˳�����*******\n");
	printf("**1-----�����Ϣ*******\n");
	printf("**2-----��ӡ��Ϣ*******\n");
	printf("**3-----ɾ����Ϣ*******\n");
	printf("**4-----������Ϣ*******\n");
	printf("**5-----�޸���Ϣ*******\n");
	printf("***********************\n");
	printf("��ѡ��---->\n");
}
void initcon(struct con* p)
{
	memset(p->a, 0, sizeof(p->a));
	p->sizet = 0;
}
void add(struct con* p)
{
	if (p->sizet > max)
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
	}
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
int main()
{
	int input;
	struct con stu;
	initcon(&stu);
	do
	{
		mune();
		scanf("%d", &input);
		switch (input)
		{
		case 0:printf("�˳�����\n"); break;
		case 1:add(&stu); break;
		case 2:print(&stu); break;
		case 3:
		case 4:
		case 5:
		default:printf("ѡ�����������ѡ��\n");
		}

	} while (input);
	return 0;
}