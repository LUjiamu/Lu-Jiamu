#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>



//练习
// 查找数据

//优化版--二分法

int main()
{
	int k = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;//左下标是0
	int right = sz - 1;//右下标是sz-1
	printf("请输入需要查找的数据：");
	scanf("%d", &k);
	while (left <= right)
	{
		int mid = (left + right) / 2;//计算中间下标
		
		if (arr[mid] > k)
		{
			right = mid - 1;

		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if(arr[mid] == k)
		{
			printf("找到了，下标是：%d,对应的数值是：%d", mid, mid + 1);
			break;
		}
	
	}
	if (left > right)
	{
		printf("没找到！");
	}
	
	return 0;
}

//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//求其中元素的个数
//	printf("请输入所要查找的数据：");
//	scanf("%d", &k);
//	for(i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i >= sz)
//	{
//		printf("没找到！");
//	}
//	
//	return 0;
//}

//1、求阶乘
//2、求所求阶乘的和
// 优化后的代码

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	printf("请输入所要求的数：");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum += ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int sum = 1;
//	int num = 0;
//	printf("请输入所要求的阶乘：");
//	scanf("%d", &n);
//	for (j= 1; j <= n; j++)
//	{
//		sum = 1;
//		/*sum = 1 * 1
//		* sum = 1*1*2
//		* sum=2*1*2*3
//		* 故要对sum每次进行复制1操作，从而使所获得的阶乘是正确的
//		*/sum = 1;
//		for (i = 1; i <= j; i++)
//		{
//			sum *= i;
//		}
//		num += sum;
//	}
//	printf("阶乘为：%d\n", num);
//	return 0;
//}


//do-while循环

//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	while (i<=10);
//	return 0;
//}

//for循环

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//k等于0，为假，跳出循环。
//	{
//		
//		k++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (j=0; j < 10;j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	for (;;)//死循环
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	for (i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//	return 0;
//
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++) 
//	{
//		printf("hehe\n");
//		if (i == 5)
//			printf("haha\n");
//		printf("%d ", i);
//	}
//		
//	
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch >'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", password);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认密码(Y/N):");
//	//getchar();
//	ret = getchar();
//	
//	if (ret == 'Y')
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("确认失败");
//	}
//	return 0;
//}









//int main()
//{
//	int password = 0;
//	int password1 = 0;
//	
//	
//	printf("请输入密码：");
//	scanf("%d", password);
//	int* ret = &password;
//	printf("%d\n", ret);
	/*printf("请确认密码：");
	int* ret1 = &password1;

	if (ret == ret1)
	{
		printf("确认成功\n");
	}
	else
	{
		printf("确认失败\n");
	}
	return 0;*/

//}

//int main()
//{
//	char password[20] = { 0 };
//	char password1[20] = { 0 };
//	int ret = 0;
//	int ret1 = 0;
//	printf("请输入密码->:");
//	scanf("%s", password);
//	char* ret = &password;
//	//getchar();
//	//getchar();
//	//ret = getchar(); 
//	
//	printf("请确认密码->：");
//	scanf("%s", password1);
//	//getchar();
//	//ret1 = getchar(); 

//	if (password == password1)
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	
//	return 0;
//}