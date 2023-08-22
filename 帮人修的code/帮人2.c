#include <stdio.h>
void system();

int main()
{
	int i,a[10],max,sum,average,j=0;
	printf("输入数组元素\n");
	for(i=0;i<10;i++)//赋值
	{
		printf("请输入a[%d]\n",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)//取最大偶数
	{
		max=a[0];
		if(a[i]>max&&a[i]%2==0)
			max=a[i];
	}
	for(i=0;i<10;i++)//求平均值
	{
		sum+=a[i];
	}
	average=sum/10;
	for(i=0;i<10;i++)
	{
		if(a[i]>average) j++;
	}
	printf("最大的偶数是%d,大于平均数的偶数有%d个\n",max,j);
    system("pause");
}