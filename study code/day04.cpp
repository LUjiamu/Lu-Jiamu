#include <stdio.h>

//�жϸ��������ǲ�������
int main()
{
	int a = 0;
	int j = 0;
	printf("��������Ҫ��֤������>");
	scanf("%d", &a);
	for (j = 2; j < a; j++) 
	{
		if (a % j == 0)
		{
			printf("%d��������", a);
			break;
		}	
	}
	if (a == j)
	{
		printf("%d������", a);
	}
	return 0;
}

//��ӡ100-200�ڵ�����

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
//			printf("%d������\n", i);
//			count++;
//		}
//	}
//	printf("����һ����%d��", count);
//	return 0;
//}

//�жϸ���������ǲ�������
//int main()
//{
//	int year = 0;
//	printf("����������Ҫ�жϵ���ݣ�>");
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0)
//	{
//		printf("%d������\n", year);
//	}
//	else if (year % 400 == 0)
//	{
//		printf("%d������\n", year);
//	}
//	else
//	{
//		printf("%d��������\n", year);
//	}
//	return 0;
//}

//��ӡ1000��2000֮�������
//1�� �ܱ�400������������
//2���ܱ�4�������Ҳ��ܱ�100������������
// 
// int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0)||(year % 400 == 0))
//		{
//			printf("%d������\n", year);
//			count++;
//		}
//	}
//	printf("����һ����%d��\n", count);
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
//			printf("%d������\n", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d������\n", year);
//			count++;
//		}
//	}
//	printf("����һ����%d��\n", count);
//	return 0;
//}



//���Լ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//int y = 0;
//	int r = 0;
//	printf("����������Ҫ�Ƚϵ���������>");
//	scanf("%d%d", &a, &b);
//	while (r = a % b)
//	{
//		//y = a % b;//�Ż�
//		a = b;
//		b = r;
//	}
//	printf("���Լ���ǣ�%d", b);
//	return 0;
//}