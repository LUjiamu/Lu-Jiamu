#include <stdio.h>

//判断给定的数是不是素数
int main()
{
	int a = 0;
	int j = 0;
	printf("请输入需要验证的数：>");
	scanf("%d", &a);
	for (j = 2; j < a; j++) 
	{
		if (a % j == 0)
		{
			printf("%d不是素数", a);
			break;
		}	
	}
	if (a == j)
	{
		printf("%d是素数", a);
	}
	return 0;
}

//打印100-200内的素数

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d是素数\n", i);
//			count++;
//		}
//	}
//	printf("素数一共有%d个", count);
//	return 0;
//}

//判断给定的年份是不是闰年
//int main()
//{
//	int year = 0;
//	printf("请输入你需要判断的年份：>");
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0)
//	{
//		printf("%d是闰年\n", year);
//	}
//	else if (year % 400 == 0)
//	{
//		printf("%d是闰年\n", year);
//	}
//	else
//	{
//		printf("%d不是闰年\n", year);
//	}
//	return 0;
//}

//打印1000到2000之间的闰年
//1、 能被400整除的是闰年
//2、能被4整除并且不能被100整除的是闰年
// 
// int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0)||(year % 400 == 0))
//		{
//			printf("%d是闰年\n", year);
//			count++;
//		}
//	}
//	printf("闰年一共有%d个\n", count);
//	return 0;
//}
// 
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d是闰年\n", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d是闰年\n", year);
//			count++;
//		}
//	}
//	printf("闰年一共有%d个\n", count);
//	return 0;
//}



//最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//int y = 0;
//	int r = 0;
//	printf("请输入你需要比较的两个数：>");
//	scanf("%d%d", &a, &b);
//	while (r = a % b)
//	{
//		//y = a % b;//优化
//		a = b;
//		b = r;
//	}
//	printf("最大公约数是：%d", b);
//	return 0;
//}