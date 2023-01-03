#include<stdio.h>
char* mystrstr(const char* a,const char* b)
{
	char* c;
	char* d;
	char* cur = (char *)a;
	if (*b == '\0')
	{
		return (char *)a;
	}
	while (*cur != '\0')
	{
		c = cur;
		d = (char *)b;
		while (*c && *d && *c == *d)
		{
			c++;
			d++;
		}
		if (*d == '\0')
		{
			return cur;
		}
		cur++;
	}
	return NULL;
}
int main()
{
	char a[] = "abcdefgh";
	char b[] = "def";
	char* ret = mystrstr(a, b);
	if (ret == NULL)
	{
		printf("√ª’“µΩ\n");
	}
	else
		printf("%s\n", ret);
	return 0;
}