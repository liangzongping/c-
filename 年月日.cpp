#include<stdio.h>
int main()
{

	int year, mouth, day;
	int sum;
	printf("请输入年月日\n");
	scanf_s("%d %d %d",&year,&mouth,&day);
	switch (mouth)
	{
	case 1:sum = day;
		break;
	case 2:sum = 31 + day;
		break;
	case 3:sum = 31 + 28 + day;
		break;
	case 4:sum = 31 + 28 + 31 + day;
		break;
	case 5:sum = 31 + 28 + 31 + 30 + day;
		break;
	case 6:sum = 31 + 28 + 31 + 30 + 31 + day;
		break;
	case 7:sum = 31 + 28 + 31 + 30 + 31 + 30 + day;
		break;
	case 8:sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + day;
		break;
	case 9:sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day;
		break;
	case 10:sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
		break;
	case 11:sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
		break;
	case 12:sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;
		break;
	default:
		printf("你输入的数据有误\n"); break;
	}
		if ((mouth > 2) && (year % 4 == 0 && year % 100 == 0) || (year % 400 == 0))
		{
			sum = sum + 1;
		}
			printf("%d %d %d 是该年的第%d天\n", year, mouth, day, sum);
		
	
	return 0;
}