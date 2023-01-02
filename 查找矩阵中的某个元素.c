#include<stdio.h>
int find(int a[3][3],int k,int *px,int *py)
{
	int x=0;
	int y=*py-1;
	while(x<=*px-1&&y>=0)
{
	if(a[x][y]>k)
	{
		y--;
	}
	else if(a[x][y]<k)
	{
		x++;
	}
	else	
	{
		*px=x;
		*py=y;
		return 1;
	}	
}
return 0;
}
int main()
{	int x=3,y=3; 
	int a[3][3]={1,2,3,
				 4,5,6,
				 7,8,9};
	int ret=find(a,7,&x,&y);
	if(ret==1)
	{
		printf("找到了\n");
		printf("其下标为（%d,%d）\n",x,y);
	}
	else
	printf("没找到\n");
	return 0;
}
