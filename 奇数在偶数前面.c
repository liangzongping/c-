//#include<stdio.h>//奇数在偶数前面 
//int main()
//{
//int a[10]={1,2,3,4,5,6,7,8,9,10};
//int i,j;
//int t;
//for(i=0;i<10;i++)
//{
//	for(j=i+1;j<10;j++)
//	{
//		if(a[i]%2==0&&a[j]%2!=0)
//		{
//			t=a[i];
//			a[i]=a[j];
//			a[j]=t;
//		 } 
//	}
// } 
// for(i=0;i<10;i++)
// printf("%d,",a[i]);
//}

#include<stdio.h>
int main()
{
	int i;
	int t;
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int left=0;
	int right=9;
	while(left<right)
	{
		while((left<right)&&a[left]%2!=0)
		{
			left++;
		}
		while((left<right)&&a[right]%2==0)
		{
			right--;
		}
		if(right>left)
		{
			t=a[left];
			a[left]=a[right];
			a[right]=t;
		}
	}
	for(i=0;i<10;i++)  
	printf("%d,",a[i]);
	return 0;
}
