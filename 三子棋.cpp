#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3
int ISFULL(char a[ROW][COL],int A,int B)
{
	int i,j;
	int t=1;
	for(i=0;i<A;i++)
	{
		for(j=0;j<B;j++)
		{
			if(a[i][j]==' ')
			t=0; 
		}
	 } 	
	return t;
}
char ISWIN(char a[ROW][COL],int A,int B)
{	
	int i,j;
	for(i=0;i<A;i++)
	{ 
	
		if(a[i][0]==a[i][1]&&a[i][0]==a[i][2]&&a[i][0]!=' ')
		{
		return a[i][0];
		}		
	}
	for(i=0;i<B;i++)
	{
	
		if(a[0][i]==a[1][i]&&a[0][i]==a[2][i]&&a[0][i]!=' ')
		return a[0][i];
	}

	if(a[0][0]==a[1][1]&&a[0][0]==a[2][2]&&a[0][0]!=' ')
	return a[0][0];
	if(a[2][0]==a[1][1]&&a[2][0]==a[0][2]&&a[2][0]!=' ')
	return a[2][0];
	if(ISFULL(a, ROW, COL)==1)
	return 'Q';
	return 'C';
}
void  play1(char a[ROW][COL],int A,int B)
{
	int x,y;
	printf("\n���1��->\n");
	while(1)
	{
		
		printf("�����������Ҫ�µ�����\n");
		scanf("%d%d",&x,&y);
		if(x>=1&&x<=A&&y>=1&&y<=B)
		{
		if(a[x-1][y-1]==' ')
		{
			a[x-1][y-1]='*';
			break;
		}
		else
		printf("��λ���ѱ�ռ�ã�����������\n");	
	}
	else
	printf("��������곬����Χ������������\n");	
}
}
/*void  play2(char a[ROW][COL],int A,int B)
{
	int x,y;
	printf("\n���2��->\n");
	while(1)
	{
		
		printf("�����������Ҫ�µ�����\n");
		scanf("%d%d",&x,&y);
		if(x>=1&&x<=A&&y>=1&&y<=B)
		{
		if(a[x-1][y-1]==' ')
		{
			a[x-1][y-1]='#';
			break;
		}
		else
		printf("��λ���ѱ�ռ�ã�����������\n");	
	}
	else
	printf("��������곬����Χ������������\n");	
}
}*/
void competer(char a[ROW][COL],int A,int B)
{
	int c=0,d=0;
	printf("������->\n");
	while(1)
{
	 c=rand()%A;
	 d=rand()%B;	
	if(a[c][d]==' ')
	{
		a[c][d]='#';
		break;
	}
}	
}
void disboard(char a[ROW][COL],int A,int B)
{
	int i,j;
	for(i=0;i<A;i++)
	{
		for(j=0;j<B;j++)
		{
			printf(" %c ",a[i][j]);
			if(j<B-1)
			printf("|");
		}
		printf("\n");
		if(i<A-1)
		{
		for(j=0;j<B;j++)
		{
			printf("---");
			if(j<B-1)
			printf("|"); 
		}
		printf("\n");
		}	
	}
	printf("**********************************************\n");
}
void initboard(char a[ROW][COL],int A,int B)
{
	int i,j;
	for(i=0;i<A;i++)
	{
		for(j=0;j<B;j++)
		{
			a[i][j]=' ';
		}
	}
}
void game()
{
	int ret ; 
	char a[ROW][COL]={0};
	initboard(a,ROW,COL);
	disboard(a,ROW,COL);
	while(1)
	{
	 
	play1(a,ROW,COL);
	disboard(a,ROW,COL);
	ret=ISWIN(a,ROW,COL);
	if(ret!='C')
	{
		break;
	}
	competer(a,ROW,COL);
	//play2(a,ROW,COL);
	disboard(a,ROW,COL);
	ret=ISWIN(a,ROW,COL);
	if(ret!='C')
	{
		break;
	}	
}
if(ret=='*')
	printf("���1Ӯ\n");
	else if(ret=='#')
	printf("����Ӯ\n");
	//printf("���2Ӯ\n");
	else
	printf("ƽ��\n");
 } 
 void fun()
{
	printf("*********************\n"); 
	printf("******1--��ʼ��Ϸ****\n");
	printf("******0--�˳���Ϸ****\n");
	printf("*********************\n");
    printf("��ѡ��->\n");
}
 void fun1()
 {
    srand((unsigned)time(NULL));
    int k;	
	do
	{
		fun();
	    scanf("%d",&k);
		switch(k)
		{
		case 0:break;
		case 1:game();break;
		default :printf("������󣡣���������������\n");break; 
		}
	 } while(k);
}
int main()
{	
	fun1();
	return 0;
}
