//×óÐý×Ö·û´®
#include<stdio.h>
#include<string.h>
//void fun(char* a,int k,int t)
//{
//	int i;
//	char b[k];
//	char c[t];
//	for(i=0;i<k;i++)
//	{
//		b[i]=a[i];
//	}b[i]='\0';
//	int j=0;
//	for(i=k;i<t;i++,j++)
//	{
//		c[j]=a[i];
//	}
//	for(i=0;i<k;i++,j++)
//	{
//		c[j]=a[i]; 
//	}
//	for(i=0;i<t;i++)
//	{
//		a[i]=c[i];
//	}a[i]='\0';
//}
void fun(char *a,int k,int t)
{
	int i,j;
	for(i=0;i<k;i++)
	{
		char c=*a;
		for(j=0;j<t-1;j++)
		{
			*(a+j)=*(a+j+1);
		}
		*(a+t-1)=c;
	}
 } 
int main()
{
	char a[20];
	printf("ÇëÊäÈëÄãÒª×óÐýµÄ×Ö·û´®\n");
	gets(a);
	int t=strlen(a);
	printf("ÇëÊäÈëÄãÒª×óÐýµÄ×Ö·û¸öÊý\n");
	int k;
	scanf("%d",&k);
	fun(a,k,t);
	puts(a); 
	return 0;
 } 
