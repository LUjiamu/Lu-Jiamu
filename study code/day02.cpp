#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>



//��ϰ
// ��������

//�Ż���--���ַ�

int main()
{
	int k = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;//���±���0
	int right = sz - 1;//���±���sz-1
	printf("��������Ҫ���ҵ����ݣ�");
	scanf("%d", &k);
	while (left <= right)
	{
		int mid = (left + right) / 2;//�����м��±�
		
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
			printf("�ҵ��ˣ��±��ǣ�%d,��Ӧ����ֵ�ǣ�%d", mid, mid + 1);
			break;
		}
	
	}
	if (left > right)
	{
		printf("û�ҵ���");
	}
	
	return 0;
}

//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//������Ԫ�صĸ���
//	printf("��������Ҫ���ҵ����ݣ�");
//	scanf("%d", &k);
//	for(i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i >= sz)
//	{
//		printf("û�ҵ���");
//	}
//	
//	return 0;
//}

//1����׳�
//2��������׳˵ĺ�
// �Ż���Ĵ���

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	printf("��������Ҫ�������");
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
//	printf("��������Ҫ��Ľ׳ˣ�");
//	scanf("%d", &n);
//	for (j= 1; j <= n; j++)
//	{
//		sum = 1;
//		/*sum = 1 * 1
//		* sum = 1*1*2
//		* sum=2*1*2*3
//		* ��Ҫ��sumÿ�ν��и���1�������Ӷ�ʹ����õĽ׳�����ȷ��
//		*/sum = 1;
//		for (i = 1; i <= j; i++)
//		{
//			sum *= i;
//		}
//		num += sum;
//	}
//	printf("�׳�Ϊ��%d\n", num);
//	return 0;
//}


//do-whileѭ��

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

//forѭ��

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//k����0��Ϊ�٣�����ѭ����
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
//	for (;;)//��ѭ��
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
//	printf("���������룺");
//	scanf("%s", password);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ������(Y/N):");
//	//getchar();
//	ret = getchar();
//	
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("ȷ��ʧ��");
//	}
//	return 0;
//}









//int main()
//{
//	int password = 0;
//	int password1 = 0;
//	
//	
//	printf("���������룺");
//	scanf("%d", password);
//	int* ret = &password;
//	printf("%d\n", ret);
	/*printf("��ȷ�����룺");
	int* ret1 = &password1;

	if (ret == ret1)
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}
	return 0;*/

//}

//int main()
//{
//	char password[20] = { 0 };
//	char password1[20] = { 0 };
//	int ret = 0;
//	int ret1 = 0;
//	printf("����������->:");
//	scanf("%s", password);
//	char* ret = &password;
//	//getchar();
//	//getchar();
//	//ret = getchar(); 
//	
//	printf("��ȷ������->��");
//	scanf("%s", password1);
//	//getchar();
//	//ret1 = getchar(); 

//	if (password == password1)
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
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