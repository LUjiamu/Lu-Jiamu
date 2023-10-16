#include <stdio.h>
//求给定数的最大公约数--辗转相除法
int main()
{
	int m = 0;
	int n = 0;
	int y = 0;
	printf("请输入需要求的两个数：>");
	scanf("%d%d", &m, &n);
	while (m % n )//当m%n的值不为0时（即结果为真时），执行循环体，当m%n的值为0时（即结果为假时），跳出循环体。
	{
		y = m % n;
		m = n;
		n = y;
	}
	printf("最大公约数是：%d\n", y);
	
	return 0;
}



//打印100以内3的倍数
//
//int main()
//{
//	int a = 0;
//	printf("100以内3的倍数是：");
//	for (a = 1;a < 100; a++)
//	{
//		if (a % 3 == 0)
//		{
//			printf("%d ",a);
//		}
//	}
//	return 0;
//}

//比较3个数的大小
// 
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入需要比较的三个数：>");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//
//	}
//	printf("%d%d%d", a, b, c);
//
//	//printf("%d %d %d", a, b, c);
//	
//	return 0;
//
//}