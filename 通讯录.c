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
	printf("**0-----退出程序*******\n");
	printf("**1-----添加信息*******\n");
	printf("**2-----打印信息*******\n");
	printf("**3-----查找信息*******\n");
	printf("**4-----修改信息*******\n"); 
	printf("**5-----删除信息*******\n");
	printf("***********************\n");
	printf("请选择---->\n");
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
			printf("增容成功\n");
		}
		else
		{
			printf("增容失败\n");
		}
	}
}
void add(struct con* p)
{
	check(p);
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
	printf("添加成功\n");
	/*if (p->sizet > MAX)
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
	}*/
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
	printf("请输入你要找的名字\n");
	scanf("%s", name);
	int i = fun(p, name);
	if (i==-1)
	{
		printf("通讯录中没有这个人\n");	
	}
	else
	{
		printf("找到了\n");
		printf("%-14s\t%-4s\t%-2s\t%-12s\t%-14s\n", "姓名", "年龄", "性别", "电话", "地址");
		printf("%-14s\t%-4d\t%-2s\t%-12s\t%-14s\n", p->a[i].name, p->a[i].age, p->a[i].sex, p->a[i].num, p->a[i].addr);
	}
}
void alter(struct con* p)
{
	char name[20];
	printf("请输入你要修改的人的名字\n");
	scanf("%s", name);
	int i = fun(p, name);
	if (i == -1)
	{
		printf("通讯录中没有这个人\n");

	}
	else
	{
		printf("找到了\n");
		printf("请修改\n");
		printf("请输入姓名：\n");
		scanf("%s", p->a[i].name);
		printf("请输入年龄：\n");
		scanf("%d", &(p->a[i].age));
		printf("请输入性别：\n");
		scanf("%s", p->a[i].sex);
		printf("请输入电话：\n");
		scanf("%s", p->a[i].num);
		printf("请输入地址：\n");
		scanf("%s", p->a[i].addr);
		printf("修改成功\n");
	}
}
void dele(struct con* p)
{
	char name[20];
	printf("请输入你要删除的人的名字\n");
	scanf("%s", name);
	int i = fun(p, name);
	if (i == -1)
	{
		printf("通讯录中没有这个人\n");

	}
	else
	{
		printf("找到了\n");
		printf("请删除\n");
		int j = i;
		for (j = i; j < p->sizet - 1; j++)
		{
			p->a[j] = p->a[j + 1];
		}
		p->sizet--;
		printf("删除成功\n");
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
		case 0:xiaohui(&stu); printf("退出程序\n"); break;
		case 1:add(&stu); /*system("cls");*/ break;
		case 2:print(&stu); break;
		case 3:find(&stu); break;
		case 4:alter(&stu); break;
		case 5:dele(&stu); break;
		default:printf("选择错误，请重新选择\n");
		}		
	} while (input);
	return 0;
}