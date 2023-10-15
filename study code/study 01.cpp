#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//分支和循环语句
// 循环语句

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//输入ctrl+z,就会退出。
//		//eof:全称为end of file,值为-1，
//		putchar(ch);
//	/*int ch = getchar();
//	putchar(ch);
//	printf("%c\n", ch);
//	return 0;*/
//
//}

//int main()
//{
//	int i = 0;8
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		
//	}
//	return 0;
//
//}

// 多分支循环语句switch
//
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++, n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//
//	}
//	printf(" m = %d,n = %d\n", m, n);
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//		case 1:
//			printf("星期一\n");
//			break; 
//		case 2:
//			printf("星期二\n");
//			break;
//		case 3:
//			printf("星期三\n");
//			break;
//		case 4:
//			printf("星期四\n");
//			break;
//		case 5:
//			printf("星期五\n");
//			break;
//		case 6:
//			printf("星期六\n");
//			break;
//		case 7:
//			printf("星期天\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//	}
//	return 0;
//}

//单语句循环

//int main()
//{
//	int i = 0;
//	while (i < 100)
//	{
//		if ( 1 == i % 2)
//			printf("%d ", i);
//			i++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	printf("请输入一个数：");
//	scanf("%d", &num);
//	if (1 == (num % 2))
//		printf("是奇数\n");
//	else
//		printf("不是奇数\n");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("哈哈\n");
//
//		else						//else和它最近的未匹配的if匹配
//			printf("呵呵\n");
//	}
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	printf("请输入年龄：");
//	scanf("%d", & age);
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 60)
//		printf("壮年\n");
//	else if (age >= 60 && age < 90)
//		printf("长寿\n");
//	else
//		printf("长寿\n");
//	return 0;
//}