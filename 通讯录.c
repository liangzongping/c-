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
	printf("**0-----退出程序*******\n");
	printf("**1-----添加信息*******\n");
	printf("**2-----打印信息*******\n");
	printf("**3-----删除信息*******\n");
	printf("**4-----查找信息*******\n");
	printf("**5-----修改信息*******\n");
	printf("***********************\n");
	printf("请选择---->\n");
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
		printf("通讯录已满\n");
	}
	else
	{
		printf("请输入姓名：\n");
		scanf("%s", p->a[p->sizet].name);
		printf("请输入年龄：\n");
		scanf("%d", &(p->a[p->sizet].age));
		printf("请输入性别：\n");
		scanf("%s", p->a[p->sizet].sex);
		printf("请输入电话：\n");
		scanf("%s", p->a[p->sizet].num);
		printf("请输入地址：\n");
		scanf("%s", p->a[p->sizet].addr);
		p->sizet++;
	}
}
void print(struct con* p)
{
	int i;
	if (p->sizet == 0)
		printf("通讯录为空\n");
	else {
		printf("%-14s\t%-4s\t%-2s\t%-12s\t%-14s\n", "姓名", "年龄", "性别", "电话", "地址");
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
		case 0:printf("退出程序\n"); break;
		case 1:add(&stu); break;
		case 2:print(&stu); break;
		case 3:
		case 4:
		case 5:
		default:printf("选择错误，请重新选择\n");
		}

	} while (input);
	return 0;
}