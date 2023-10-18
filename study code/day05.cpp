#include <stdio.h>
#include <math.h>

//求输入数据中的最大值
int main()
{
	int arr[10] = { 0 };
	int max = 0;
	int i = 0;
	int j = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("请输入需要比较的十个数字：>");
	for (j = 0; j < sz; j++)
	{
		scanf("%d", &arr[j]);
	}
	for (i = 0; i < sz; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("所求数据中最大的是：>%d", max);
	return 0;
}

//求十个数的最大值
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int max = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("最大值是%d\n", max);
//	return 0;
//}

//分数求和(1+1/2-1/3+1/4-……+1/100)

//int main()
//{
//	int i = 0;
//	double sum1 = 0.0;
//	double sum = 0.0;
//	double num = 0.0;
//	int flag = 1;
//	for(i = 1; i <= 100; i += 2)
//	{
//		sum += flag * (1.0 / i);
//	}
//
//	for (i = 2; i <= 100; i += 2)
//	{
//		sum1 += -flag * (1.0 / i);
//	}
//	num = sum1 + sum;
//	printf("%lf\n", num);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * (1.0/i);
//		flag = -flag;
//
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//判断1到100有多少个9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if ((i % 10 == 9) || (i / 10 == 9))
//		{
//			printf("%d ", i);
//			count++;
//		}
//
//	}
//	printf("\n");
//	printf("一共有%d个9\n", count);
//	return 0;
//
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			printf("%d", i);
//			count++;
//		}
//
//	}
//	printf("\n");
//	printf("一共有%d个9\n", count);
//	return 0;
//
//}


//判断素数代码优化
//判断素数的另一种方法：如果一个数是素数，那么一定存在一个数<=开平方该素数为该素数的因数。

//int main()
//{
//	int i = 0;
//	printf("请输入需要判断的数字：\n");
//	scanf("%d", &i);
//
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
//		{
//			printf("%d不是素数！\n", i);
//			break;
//		}
//	}
//	if (j > sqrt(i))
//	{
//		printf("%d是素数\n", i);
//	}
//	return 0;
//}


        
	
	