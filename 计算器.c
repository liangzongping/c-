#include<stdio.h>
int Add(int x,int y)
{
	return x+y;
}
int Sub(int x,int y)
{
	return x-y;
}
int Mul(int x,int y)
{
	return x*y;
}
int Div(int x,int y)
{
	return x/y;
}
int Xor(int x,int y)
{
	return x^y;
}
void menu()
{
	printf("*********************\n");
	printf("****1.Add    2.Sub***\n");
	printf("****3.Mul    4.Div***\n");
	printf("****5.Xor    0.exit**\n");
	printf("*********************\n");
}
int main()
{
	int input;
	int (*p[6])(int x,int y)={0,Add,Sub,Mul,Div,Xor};
	do
	{
		menu();
		int x,y;
		printf("��ѡ��->\n");
		scanf("%d",&input);
		if(input>=1&&input<=5)
		 {
		 	printf("������������\n");
		 	scanf("%d%d",&x,&y);
		 	int ret=p[input](x,y);
		 	printf("%d\n",ret);
		  } 
		else if(input==0)
		{
			printf("�˳�\n");
		}
		 else
		  {
		  	printf("ѡ�����,����������\n");
		  }
	}while(input);
	return 0;
 } 
