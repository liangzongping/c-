#include<stdio.h>
int main()
{
	char a[100],b[100],c[100];
	//c[0]='\0';
	puts("������һ���ַ���");
	gets(a);
	char n;
	puts("������һ��Ҫ��ȥ���ַ�"); 
	n=getchar(); 
	int i,j=0;
	for(i=0;a[i]!='\0';i++)
	{
		while(a[i]!=n)
        {
	     c[j++]=a[i++];
		}				
	}

	puts(c);	
 } 
