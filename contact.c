#include"contact.h"
void menu()
{
	printf("\n******************************\n");
	printf("\n***0.退出通讯录***************\n");
	printf("\n***1.创建通讯录***************\n");
	printf("\n***2.显示通讯录**************\n");
	printf("\n***3.删除通讯录***************\n");
	printf("\n***4.插入通讯录***************\n");
	printf("\n***5.修改通讯录***************\n");
	printf("\n***6.保存通讯录***************\n");
	printf("\n***7.加载通讯录***************\n");
	printf("\n******************************\n");
	printf("\n请选择-->\n");
}
//采用没有头指针的链表存储，不需要考虑扩容问题
//加载数据
void conload(con** head, int n)
{
	//记录成员个数
	int count = 1;
	con* pnew;
	//开辟一个新空间接受文件中的数据
	con* t = (con*)malloc(sizeof(con));
	//初始化该该空间
	memset(t, 0, sizeof(con));
	*head = pnew = t;
	//t->next = NULL;
	FILE* pf = fopen("text1.dat", "rb");
	if (pf == NULL)
	{
		printf("文件打开失败\n");
		return;
	}
	else
	{
		//当文件中的个数为0时不用加载，head指向空指针
		if (n == 0)
		{
			*head = NULL;
		}
			while (n--)
			{
				fread(t, sizeof(con), 1, pf);
				if (count == 1)
				{
					t->next = NULL;
				}
				else
				{
					pnew->next = t;
					t->next = NULL;
					pnew = t;
				}
				t = (con*)malloc(sizeof(con));
				memset(t, 0, sizeof(con));
				count++;
			}
			
		free(t);
		t = NULL;
	}
	
}
int compute(con* head)
{
	int count = 0;
	con* cur = head;
	while (cur)
	{
		count++;
		cur = cur->next;
	}
	return count;
}
void createcon(con** head)
{
	int n = 1;
	while(n)
	{
		con* newnode = (con*)malloc(sizeof(con));
		if (newnode == NULL)
		{
			printf("malloc file \n");
			exit(-1);
		}
		printf("请输入第%d个人的序号\n",n);
		scanf("%d", &(newnode->n));
		if (newnode->n != 0)
		{
			n++;
			printf("请输入第%d个人的名字\n", n-1);
			scanf("%s", &(newnode->name));
			printf("请输入第%d个人的性别\n", n-1);
			scanf("%s", &(newnode->sex));
			printf("请输入第%d个人的电话号码\n", n-1);
			scanf("%d", &(newnode->num));
			printf("请输入第%d个人的地址\n", n-1);
			scanf("%s", &(newnode->adress));
			newnode->next = NULL;
			if (*head == NULL)
			{
				*head = newnode;
			}
			else
			{
				con* tail = *head;
				while (tail->next != NULL)
				{
					tail = tail->next;
				}
				tail->next = newnode;
				
			}
		}
		else
		{
			return;
		}
	}
}
void conprint(con* head)
{
	printf("%-5s     %-5s      %-5s     %-15s      %-20s\n", "序号", "名字", "性别", "电话", "地址");
	while (head != NULL)
	{

		printf("%-5d     %-5s      %-5s     %-15d      %-20s\n", head->n, head->name, head->sex, head->num, head->adress);
		head = head->next;
	}
}
con* find(con* head,int n)//找到要删除的节点
{
	if (head == NULL)
		return NULL;
	con* cur = head;
	while (cur)
	{
		if (cur->n == n)
			return cur;
		cur = cur->next;
	}
	return NULL;
}
void condele(con** head,int n)
{
	con* cur = *head;


	//按序号删除
	con* p = find(cur, n);
	if (p == NULL)
	{
		printf("没有这个序号\n");
		return;
	}
	if (p == *head)
	{
		*head = cur->next;
		free(cur);
	}
	else
	{
		//找到要删除的前一个节点
		while (cur->next != p)
		{
			cur = cur->next;
		}
		con* next = p->next;
		free(p);
		cur->next = next;
	}
	
		
	//删除第几个人
	/*int i = 1;
	if (n == 1)
	{
		*head = cur->next;
		free(cur);
	}
	else
	{
		while (i < n - 1 && cur->next->next != NULL)
		{
			i++;
			cur = cur->next;
		}
		con* p = cur->next->next;
		free(cur->next);
		cur->next = p;
	}*/
}
void conInsert(con** head, int n)
{
	con* newnode = (con*)malloc(sizeof(con));
	if (newnode == NULL)
	{
		printf("malloc file\n");
		exit(-1);
	}
	printf("请输入这个人的序号\n");
	scanf("%d", &(newnode->n));
	printf("请输入这个人的名字\n");
	scanf("%s", &(newnode->name));
	printf("请输入这个人的性别\n");
	scanf("%s", &(newnode->sex));
	printf("请输入这个人的电话号码\n");
	scanf("%d", &(newnode->num));
	printf("请输入这个人的地址\n");
	scanf("%s", &(newnode->adress));
	newnode->next = NULL;
	con* cur = *head;
	//找到你要在哪个序号后插入
	con* q = find(*head,n);
	while (cur!= q)
	{
		cur = cur->next;
	}
	newnode->next = cur->next;
	cur->next = newnode;
	
}
void conrevise(con** head, int n)
{
	con* cur = *head;
	con* p = find(cur, n);
	while (cur != p)
	{
		cur = cur->next;
	}
	printf("请修改该人的数据\n");
	printf("请输入这个人的序号\n");
	scanf("%d", &(cur->n));
	printf("请输入这个人的名字\n");
	scanf("%s", &(cur->name));
	printf("请输入这个人的性别\n");
	scanf("%s", &(cur->sex));
	printf("请输入这个人的电话号码\n");
	scanf("%d", &(cur->num));
	printf("请输入这个人的地址\n");
	scanf("%s", &(cur->adress));
	
}
void consave(con* head)
{
	int i;
	int sz = compute(head);
	FILE* pf = fopen("text1.dat", "wb");
	if (pf == NULL)
	{
		printf("文件打开失败\n");
		return;
	}
	else
	{
		con* cur = head;
		for (i = 0; i < sz; i++)
		{
			fwrite(cur, sizeof(con), 1, pf);
			cur = cur->next;
		}
		/*while (cur)
		{
			fwrite(cur, sizeof(con), 1, pf);
			cur = cur->next;
		}*/
		fclose(pf);
		pf = NULL;
	}
	printf("保存成功\n");
}
void condestroy(con** head)
{
	con* cur = *head;
	while (cur)
	{
		//销毁前记住下一个节点的地址，以免找不到
		con* next = cur->next;
		free(cur);
		cur = next;
	}
	*head = NULL;

}