
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("文本操作.txt", "r");
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
//{//fget类函数是指从文件中获取，fput 是指把东西放进文件中
//	char a[1000];
//	FILE* p = fopen("test.txt", "r");
//	if (p == NULL)
//	{
//		return 0;
//	}
//	fgets(a, 1000, p);
//	printf("%s", a);
//	fgets(a, 1000, p);//fget函数是从文件中获取以\n结束的字符串.故有多少个\n，就有多少个字符串+1；
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
//		//写文件
//		fputs("hello\n", p);
//		fputs("world", p);//fputs向文件输送内容
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
//	fprintf(p, "%d %f %s", a.a, a.b, a.c);//向文件输入；
//	fclose(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	struct s a = { 0 };
//	FILE* p = fopen("test.txt", "r");//读取文件中的内容;输出；
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
//	//fscanf(stdin, "%d %f %s", &(a.a), &(a.b), &(a.c));//向stdin(也是个文件)输入；键盘（默认打开）。
//	fprintf(stdout, "%d %f %s", a.a, a.b, a.c);//把。。。。。输出到stdout(也是个文件)---屏幕（默认打开）
//
//	return 0;
//}
//int main()
//{
//	struct s a = { 100,3.14,"liang" };
//	char b[1000];
//	sprintf(b, "%d %f %s", a.a, a.b, a.c);//向字符串中输入
//	printf("%s", b);
//	return 0;
//}
//int main()
//{
//	struct s a = { 0 };
//	char b[1000] = "100 3.14 liang";
//	sscanf(b, "%d %f %s", &(a.a), &(a.b), &(a.c));//从字符串输出
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
//	int pos = ftell(p);//返回偏移量
//	printf("%d", pos);//abcdef//SEEK_CUR当前位置------SEEK_END（f后面）文件末尾--------SEEE_SET起始位置
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
		perror("文件读取失败");
		return 0;
	}
	int ch;
	while ((ch = fgetc(p))!=EOF )
	{
		putchar(ch);
	}
	if (ferror(p))
	{
		printf("错误结束\n");
	}
	else if (feof(p))
	{
		printf("文件尾结束\n");
	}
	fclose(p);
	p = NULL;
	return 0;
}