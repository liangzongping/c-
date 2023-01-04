#include<stdio.h>
#include<string.h>
int main()
{
	char a[]="123.453.546@.131*90";
//	char *ret=strtok(a,".@*");
//	printf("%s\n",ret);
//	while(ret!=NULL)
//	{
//		ret=strtok(NULL,".@*");
//		printf("%s\n",ret);
//	}
	char *ret; 
	for(ret=strtok(a,".@*");ret!=NULL;ret=strtok(NULL,".@*"))
	{
		printf("%s\n",ret);
	}
	return 0;
 } 
