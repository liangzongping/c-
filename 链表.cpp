#include<stdio.h>
#include<stdlib.h> 
typedef struct student{
	int num;
	int score;
	struct student *next; 
}STU;
void fun()
{
	printf("1-----创建链表\n");
	printf("2-----输出链表\n");
	printf("3-----插入链表\n");
	printf("0-----退出\n");
}
STU *create()
{
	STU *p1,*p2;
	STU *head=NULL; 
	 int n=0;
	p1=p2=(STU *)malloc(sizeof(STU));
	if(p1!=NULL)
	{
		printf("请输入链表数据(输入学号0表示结束输入)\n");
		printf("请输入第1个同学的学号\n");
		scanf("%d",&p1->num );
		if(p1->num !=0)
		{
			n++;
			printf("请输入第%d个同学的分数\n",n);
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
	    printf("请输入第%d个同学的学号\n",n+1);
	    scanf("%d",&p1->num );
	    if(p1->num !=0)
	   {
	   	n++;
	   	printf("请输入第%d个同学的分数\n",n);
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
	printf("输出链表\n");
	if(p!=NULL)
	while(p!=NULL)
	{
		printf("%d:	%d\n",p->num,p->score);
		p=p->next;	
		
	}
	else
	printf("空链表"); 
	
}
void myinsert(STU *head,int n)
{
	int i=1;
	int num,score;
	printf("输入你要插入的学号与分数\n");
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
	printf("请选择->");
	int k;
	scanf("%d",&k);
	switch(k)
	{
		case 0:exit(0);break;
		case 1:head=create();break;
		case 2:print(head); break;
		case 3:printf("请输入在第几个后插入\n");scanf("%d",&n);myinsert(head,n);break;
	}
	
	}
	
	
	return 0;
 } 
