#include<stdio.h>
#include<stdlib.h> 
typedef struct student{
	int num;
	int score;
	struct student *next; 
}STU;
void fun()
{
	printf("1-----��������\n");
	printf("2-----�������\n");
	printf("3-----��������\n");
	printf("0-----�˳�\n");
}
STU *create()
{
	STU *p1,*p2;
	STU *head=NULL; 
	 int n=0;
	p1=p2=(STU *)malloc(sizeof(STU));
	if(p1!=NULL)
	{
		printf("��������������(����ѧ��0��ʾ��������)\n");
		printf("�������1��ͬѧ��ѧ��\n");
		scanf("%d",&p1->num );
		if(p1->num !=0)
		{
			n++;
			printf("�������%d��ͬѧ�ķ���\n",n);
			scanf("%d",&p1->score );
			head=p1;
		}
		else 
		{
			free(p1);
			return head;
		}
	}
	else return head;
	while(1)
	{
		p1=(STU *)malloc(sizeof(STU));
	    if(p1!=NULL)
	    {
	    printf("�������%d��ͬѧ��ѧ��\n",n+1);
	    scanf("%d",&p1->num );
	    if(p1->num !=0)
	   {
	   	n++;
	   	printf("�������%d��ͬѧ�ķ���\n",n);
	   	scanf("%d",&p1->score );
	   	p2->next =p1;
	   	p2=p1;
		} 
		else
		{
		free(p1);	
		p2->next =NULL;
		return head;
		}	
	    	
	    	
	    	
		}
		
		
		
		
	}
	
	
 } 
void print(STU *p)
{
	printf("�������\n");
	if(p!=NULL)
	while(p!=NULL)
	{
		printf("%d:	%d\n",p->num,p->score);
		p=p->next;	
		
	}
	else
	printf("������"); 
	
}
void myinsert(STU *head,int n)
{
	int i=1;
	int num,score;
	printf("������Ҫ�����ѧ�������\n");
	scanf("%d%d",&num,&score);
	STU *p;
	while(i<n&&head->next !=NULL)
	{
		i++;
		head=head->next ;
	 } 
	 p=(STU *)malloc(sizeof(STU));
	 if(p!=NULL)
	 {
	 	p->num =num;
	 	p->score =score;
	 	p->next =head->next ;
	 	head->next =p;
	  } 
	  else 
	  {
	  	free(p);
	  }
}
int main()
{
	int n;
	STU *head;
	while(1)
	{
	fun();
	printf("��ѡ��->");
	int k;
	scanf("%d",&k);
	switch(k)
	{
		case 0:exit(0);break;
		case 1:head=create();break;
		case 2:print(head); break;
		case 3:printf("�������ڵڼ��������\n");scanf("%d",&n);myinsert(head,n);break;
	}
	
	}
	
	
	return 0;
 } 
