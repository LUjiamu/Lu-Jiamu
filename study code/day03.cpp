#include <stdio.h>
//������������Լ��--շת�����
int main()
{
	int m = 0;
	int n = 0;
	int y = 0;
	printf("��������Ҫ�����������>");
	scanf("%d%d", &m, &n);
	while (m % n )//��m%n��ֵ��Ϊ0ʱ�������Ϊ��ʱ����ִ��ѭ���壬��m%n��ֵΪ0ʱ�������Ϊ��ʱ��������ѭ���塣
	{
		y = m % n;
		m = n;
		n = y;
	}
	printf("���Լ���ǣ�%d\n", y);
	
	return 0;
}



//��ӡ100����3�ı���
//
//int main()
//{
//	int a = 0;
//	printf("100����3�ı����ǣ�");
//	for (a = 1;a < 100; a++)
//	{
//		if (a % 3 == 0)
//		{
//			printf("%d ",a);
//		}
//	}
//	return 0;
//}

//�Ƚ�3�����Ĵ�С
// 
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("��������Ҫ�Ƚϵ���������>");
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