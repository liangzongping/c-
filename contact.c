#include"contact.h"
void menu()
{
	printf("\n******************************\n");
	printf("\n***0.�˳�ͨѶ¼***************\n");
	printf("\n***1.����ͨѶ¼***************\n");
	printf("\n***2.��ʾͨѶ¼**************\n");
	printf("\n***3.ɾ��ͨѶ¼***************\n");
	printf("\n***4.����ͨѶ¼***************\n");
	printf("\n***5.�޸�ͨѶ¼***************\n");
	printf("\n***6.����ͨѶ¼***************\n");
	printf("\n***7.����ͨѶ¼***************\n");
	printf("\n******************************\n");
	printf("\n��ѡ��-->\n");
}
//����û��ͷָ�������洢������Ҫ������������
//��������
void conload(con** head, int n)
{
	//��¼��Ա����
	int count = 1;
	con* pnew;
	//����һ���¿ռ�����ļ��е�����
	con* t = (con*)malloc(sizeof(con));
	//��ʼ���øÿռ�
	memset(t, 0, sizeof(con));
	*head = pnew = t;
	//t->next = NULL;
	FILE* pf = fopen("text1.dat", "rb");
	if (pf == NULL)
	{
		printf("�ļ���ʧ��\n");
		return;
	}
	else
	{
		//���ļ��еĸ���Ϊ0ʱ���ü��أ�headָ���ָ��
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
		printf("�������%d���˵����\n",n);
		scanf("%d", &(newnode->n));
		if (newnode->n != 0)
		{
			n++;
			printf("�������%d���˵�����\n", n-1);
			scanf("%s", &(newnode->name));
			printf("�������%d���˵��Ա�\n", n-1);
			scanf("%s", &(newnode->sex));
			printf("�������%d���˵ĵ绰����\n", n-1);
			scanf("%d", &(newnode->num));
			printf("�������%d���˵ĵ�ַ\n", n-1);
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
	printf("%-5s     %-5s      %-5s     %-15s      %-20s\n", "���", "����", "�Ա�", "�绰", "��ַ");
	while (head != NULL)
	{

		printf("%-5d     %-5s      %-5s     %-15d      %-20s\n", head->n, head->name, head->sex, head->num, head->adress);
		head = head->next;
	}
}
con* find(con* head,int n)//�ҵ�Ҫɾ���Ľڵ�
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


	//�����ɾ��
	con* p = find(cur, n);
	if (p == NULL)
	{
		printf("û��������\n");
		return;
	}
	if (p == *head)
	{
		*head = cur->next;
		free(cur);
	}
	else
	{
		//�ҵ�Ҫɾ����ǰһ���ڵ�
		while (cur->next != p)
		{
			cur = cur->next;
		}
		con* next = p->next;
		free(p);
		cur->next = next;
	}
	
		
	//ɾ���ڼ�����
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
	printf("����������˵����\n");
	scanf("%d", &(newnode->n));
	printf("����������˵�����\n");
	scanf("%s", &(newnode->name));
	printf("����������˵��Ա�\n");
	scanf("%s", &(newnode->sex));
	printf("����������˵ĵ绰����\n");
	scanf("%d", &(newnode->num));
	printf("����������˵ĵ�ַ\n");
	scanf("%s", &(newnode->adress));
	newnode->next = NULL;
	con* cur = *head;
	//�ҵ���Ҫ���ĸ���ź����
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
	printf("���޸ĸ��˵�����\n");
	printf("����������˵����\n");
	scanf("%d", &(cur->n));
	printf("����������˵�����\n");
	scanf("%s", &(cur->name));
	printf("����������˵��Ա�\n");
	scanf("%s", &(cur->sex));
	printf("����������˵ĵ绰����\n");
	scanf("%d", &(cur->num));
	printf("����������˵ĵ�ַ\n");
	scanf("%s", &(cur->adress));
	
}
void consave(con* head)
{
	int i;
	int sz = compute(head);
	FILE* pf = fopen("text1.dat", "wb");
	if (pf == NULL)
	{
		printf("�ļ���ʧ��\n");
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
	printf("����ɹ�\n");
}
void condestroy(con** head)
{
	con* cur = *head;
	while (cur)
	{
		//����ǰ��ס��һ���ڵ�ĵ�ַ�������Ҳ���
		con* next = cur->next;
		free(cur);
		cur = next;
	}
	*head = NULL;

}