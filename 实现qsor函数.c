#include<stdio.h>
#include<string.h>
struct stu {
	char name[20];
	int age;
};
int cmp(void* e1, void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}
//int cmp(void* e1, void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
void swap(char* buf1, char* buf2,int length)
{
	int t;
	int i;
	for (i = 0; i < length; i++)
	{
		t = *buf1;//��Ϊ��������һ���������ݣ�����������ֻ��char *,��Ҫһ��һ����char��������ʵ��һ�����ݵĽ�����length��������Ϊ��֪�����Ǹ�ʲô����
		*buf1 = *buf2;
		*buf2 = t;
		buf1++;
		buf2++;
	}
}
my_qsort(void* a, int sz, int length, int (*cmp)(void* e1, void* e2))
{
	int i, j;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char *)a+j*length,(char *)a+(j+1)*length) > 0)
			{
				swap((char*)a + j * length, (char*)a + (j + 1) * length,length);
			}//��Ҫ�Ƚϵ�����Ԫ��ת����char���ͱȽϣ��������length��ʵ������һ��Ԫ�رȽϡ�
		}

	}
}
int main()
{
	//int a[10] = { 1,2,356,21,-1,-2,0,11,13,17 };
	struct stu s[3] = { {"li",25},{"zhao",18},{"cheng",20} };
	int sz = sizeof(s) / sizeof(s[0]);
	my_qsort(s, sz, sizeof(s[0]), cmp);
	return 0;
}