
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("�ı�����.txt", "r");
//	if (pf != NULL)
//	{
//		fwrite(&a, 4, 1, pf);
//		fclose(pf);
//		pf = NULL;
//	}
//	return 0;
//}
//int main()
//{
//	FILE* p = fopen("test.txt", "w");
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		char a[] = "i love china!!!";
//		fwrite(a, 1, sizeof(a), p);
//		/*fputc('a', p);
//		fputc('p', p);
//		fputc('p', p);
//		fputc('l', p);
//		fputc('e', p);*/
//		fclose(p);
//		p = NULL;
//	}
//}
//int main()
//{//fget�ຯ����ָ���ļ��л�ȡ��fput ��ָ�Ѷ����Ž��ļ���
//	char a[1000];
//	FILE* p = fopen("test.txt", "r");
//	if (p == NULL)
//	{
//		return 0;
//	}
//	fgets(a, 1000, p);
//	printf("%s", a);
//	fgets(a, 1000, p);//fget�����Ǵ��ļ��л�ȡ��\n�������ַ���.���ж��ٸ�\n�����ж��ٸ��ַ���+1��
//	printf("%s", a);
//	fclose(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	int ch =fgetc(stdin);
//	fputc(ch,stdout);
//	return 0;
//int main()
//{
//	FILE* p = fopen("test.txt", "w");
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		//д�ļ�
//		fputs("hello\n", p);
//		fputs("world", p);//fputs���ļ���������
//		fclose(p);
//		p = NULL;
//	}
//	return 0;
//}
//int main()
//{
//	
//	char a[1000] = {0};
//	fgets(a, 1000,stdin);
//	fputs(a, stdout);
//	
//}
struct s {
	int a;
	float b;
	char c[20];
};
//int main()
//{
//	struct s a = { 10,3.14f,"liang" };
//	FILE* p = fopen("test.txt", "w");
//	if (p == NULL)
//	{
//		return 0;
//
//	}
//	fprintf(p, "%d %f %s", a.a, a.b, a.c);//���ļ����룻
//	fclose(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	struct s a = { 0 };
//	FILE* p = fopen("test.txt", "r");//��ȡ�ļ��е�����;�����
//	if (p == NULL)
//	{
//		return 0;
//	}
//	fscanf(p, "%d %f %s", &(a.a), &(a.b), &(a.c));
//	printf("%d %f %s", (a.a), (a.b), (a.c));
//	fclose(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	struct s a = {100,1.23,"liang"};
//	//fscanf(stdin, "%d %f %s", &(a.a), &(a.b), &(a.c));//��stdin(Ҳ�Ǹ��ļ�)���룻���̣�Ĭ�ϴ򿪣���
//	fprintf(stdout, "%d %f %s", a.a, a.b, a.c);//�ѡ��������������stdout(Ҳ�Ǹ��ļ�)---��Ļ��Ĭ�ϴ򿪣�
//
//	return 0;
//}
//int main()
//{
//	struct s a = { 100,3.14,"liang" };
//	char b[1000];
//	sprintf(b, "%d %f %s", a.a, a.b, a.c);//���ַ���������
//	printf("%s", b);
//	return 0;
//}
//int main()
//{
//	struct s a = { 0 };
//	char b[1000] = "100 3.14 liang";
//	sscanf(b, "%d %f %s", &(a.a), &(a.b), &(a.c));//���ַ������
//	printf("%d %f %s", a.a, a.b, a.c);
//	return 0;
//}
//int main()
//{
//	/*struct s a = { 100,3.14,"liang" };
//	FILE* p = fopen("test.txt", "wb");
//	if (p == NULL)
//	{
//		return 0;
//	}
//	fwrite(&a, sizeof(struct s), 1, p);
//	fclose(p);
//	p = NULL;*/
//	struct s a = {0};
//	FILE* p = fopen("test.txt", "rb");
//	if (p == NULL)
//	{
//		return 0;
//	}
//	fread(&a, sizeof(struct s), 1, p);
//	printf("%d %f %s", a.a, a.b, a.c);
//	fclose(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* p = fopen("test.txt", "r");
//		if (p == NULL)
//		{
//			return 0;
//		}
//	/*fseek(p, 4, SEEK_CUR);
//	fseek(p, 1, SEEK_CUR);*/
//	fgetc(p);
//	int pos = ftell(p);//����ƫ����
//	printf("%d", pos);//abcdef//SEEK_CUR��ǰλ��------SEEK_END��f���棩�ļ�ĩβ--------SEEE_SET��ʼλ��
//	fclose(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* p = fopen("test.txt", "r");
//		if (p == NULL)
//		{
//			return 0;
//		}
//		int ch = fgetc(p);
//		printf("%c", ch);
//		rewind(p);
//		ch = fgetc(p);
//		printf("%c", ch);
//		fclose(p);
//	p = NULL;
//	return 0;
//}
int main()
{
	FILE* p = fopen("test.txt", "r");
	if (p == NULL)
	{
		perror("�ļ���ȡʧ��");
		return 0;
	}
	int ch;
	while ((ch = fgetc(p))!=EOF )
	{
		putchar(ch);
	}
	if (ferror(p))
	{
		printf("�������\n");
	}
	else if (feof(p))
	{
		printf("�ļ�β����\n");
	}
	fclose(p);
	p = NULL;
	return 0;
}