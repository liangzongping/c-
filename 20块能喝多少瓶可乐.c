#include<stdio.h>
int main()
{
	//20Ԫ��20ƿ���֣�������ƿ�ɻ�һƿ���֣�һ�����Ժȶ���ƿ 
    int money=20;
    int t=money;
    int k=t;
    while(k>=2)//ֻҪ������ƿ���ϾͿ��Բ��ϵĻ� 
    {
    	t+=k/2;
    	k=k/2+k%2;
	}
	printf("%d",t);
}
