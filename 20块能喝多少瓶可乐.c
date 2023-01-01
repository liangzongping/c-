#include<stdio.h>
int main()
{
	//20元买20瓶可乐，两个空瓶可换一瓶可乐，一共可以喝多少瓶 
    int money=20;
    int t=money;
    int k=t;
    while(k>=2)//只要有两个瓶以上就可以不断的换 
    {
    	t+=k/2;
    	k=k/2+k%2;
	}
	printf("%d",t);
}
