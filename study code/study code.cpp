#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//struct Book {
//	char name[20];
//	short price;
//};
//
//int main() {
//	struct Book b1 = { "c语言程序设计",55 };
//	struct Book* pd = &b1;
//	strcpy(b1.name, "C++");//对字符串数组进行更改时必须使用strcpy，在使用它之前需要引入库<string.h>
//	printf("%s\n", pd->name);
//	printf("%d\n", pd->price);
//	/*printf("%s\n", (*pd).name);
//	printf("%d\n", (*pd).price);*/
//	/*printf("书名：%s\n", b1.name);
//	printf("价格；%d\n", b1.price);
//	b1.price = 15;
//	printf("价格：%d元\n", b1.price);*/
//	return 0;
//
//}


//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(short*));
//	//double d = 3.14;
//	//double* pd = &d;
//	//*pd = 5.5;
//	//printf("pd = %lf\n", d);
//	//printf("pd = %lf\n", pd);
//	//printf("pd = %p\n", &d);
//	//printf("pd = %p\n",pd);
//	//printf("%d\n", sizeof(pd));//32位机上是4，在64位机上是8
//	//printf("%d\n", sizeof(d));
//	return 0;
//}

//int main()
//{
//	char ch= 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%d\n", sizeof(pc));
//	//printf("%c\n", ch);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;//p是指针变量
//	/*printf("%p\n",&a);
//	printf("%p\n", &p);*/
//	//*p = 20;//解引用操作符
//	//printf("%d\n", a);
//	return 0;
//}

//宏
//#define sum(A,B) ((A)+(B))
//
//int main()
//{
//	int a = 30;
//	int b = 40;
//	int Sum = sum(a, b);
//	printf("Sum = %d\n", Sum);
//	int Sum1 = 10 * sum(a, b);
//	printf("Sum1 = %d\n", Sum1);
//
//	return 0;
//}

//#define MAX(A,B) (A>B?A:B)
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	printf("请输入两个操作数:\n");
//	scanf("%d%d", &a, &b);
//	max = MAX(a, b);
//	printf("较大的数是：%d\n", max);
//	
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 30;
//	int sum = 0;
//	extern int Add(int,int);
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main() 
//{
//	extern int g_val;
//	printf("g_val = %d\n",g_val);
//	return 0;
//}

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a=%d\n", a);
//	
//}
//
//int main()
//{
//	int i = 0;
//
//	while (i < 5)
//	{
//		test();
//		i++;
//		
//	}
//
//	return 0;
//}

//int main()
//{
//	typedef unsigned int u_int;//类型重定义，下面的num1和num2类型是一样的，unsigned表示无符号数。
//	unsigned int num1 = 20;
//	u_int num2 = 30;
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	//&&逻辑与 ||逻辑或
//	int a = 0;
//	int b = 0;
//	int c = a || b;
//	printf("c=%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++,先使用，后++
//	//int b = ++a;//前置++，先++，后使用
//	//int b = a--;
//	int b = --a;
//
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = ~a;//按二进制位取反
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof(arr));//计算数组的大小
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//计算数组中有几个元素
//	return 0;
//
//}
//int main()

//	/*
//	char ch = 'A';
//	//printf("%c\n", ch);
//	return 0;
//	int age = 20;
//	//printf("%d\n", age);
//	return 0;
//	*/
//	/*double f = 3.2;
//	printf("%lf\n", f);
	////return 0;*/
//
////	printf("%d\n", sizeof(int));
////	printf("%d\n", sizeof(short));
////	printf("%d\n", sizeof(long));
////	printf("%d\n", sizeof(long long));
////	printf("%d\n", sizeof(float));
////	printf("%d\n", sizeof(double));
////	printf("%d\n", sizeof(char));
////	/*printf("%d\n", sizeof(int));
////	printf("%d\n", sizeof(int));*/
////	return 0;
////
//	int num1 = 0;
//	int num2 = 0;
////	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum= num1 + num2;
//	printf("sum = %d\n", sum);
//}
//int main()//用来引用其他的全局变量，全局变量在整个工程内部都有效
//{
//	extern  int gobal;
//	printf("gobal= %d\n", gobal);
//	return 0;
//int main() 
//	//define定义的标识符常量
//#define MAX 10
//{
//	int arr [MAX] = {0};
//	printf("%d\n", MAX);
//	return 0;
//}
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//enum Color {
//	RED,
//	BLUE,
//	YELLOW,
//	GREEY
//};
//int main() {
//	enum Color color = YELLOW;
//	return 0;
//int main()
//{
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return(0);

//int main(){

	//char arr1[] = "abc";
	//char arr2[] = { 'a','b','c'};
	///*printf("%s\n", arr1);
	//printf("%s\n", arr2);*/

	//printf("%d\n", strlen(arr1));
	//printf("%d\n", strlen(arr2));
	//return 0;

	/*printf("c:\\test\\32\\test.c");*/

	//printf("%c\n", '\'');

	/*printf("%s\n","\"");
	return 0;*/

	/*printf("%d\n", strlen("c:\test\32\test.c"));
	return 0;*/

	/*int input = 0;
	printf("加入比特\n");
	printf("你要好好学习吗？（0/1）->:");
	scanf("%d", &input);
	if (input == 1)
		printf("一个好offer\n");
	else
		printf("回家卖红薯\n");
	return 0;*/

	//int line = 0;
	//printf("加入比特\n");

	//while (line < 20000)
	//{
	//	
	//	printf("敲一行代码:%d\n",line);
	//	line++;

	//}
	//if(line >=20000)

	//	printf("一份好offer\n");

	//return 0;


//}

//int add(int x,int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main() {
//	int sum1 = 10;
//	int sum2 = 20;
//	int a = 100;
//	int b = 200;
//	int sum = 0;
//	sum = add(sum1, sum2);
//	sum2 = add(a, b);
//	printf("%d\n", sum);
//	printf("%d\n", sum2);
//	return 0;

	//int main(){
	//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	//	/*printf("%d\n", arr[4]);*/
	//	int i = 0;
	//	while (i < 10)
	//	{
	//		printf("%d ", i);
	//			i++;
	//	}
	//	return 0;


//}
//
//int MAX(int x,int y) //函数体部分
//{
//	
//	if (x > y)
//		return x;
//	else if (y > x)
//		return y;
//	else
//		return(char("一样大"));
//
//}
//
//int main() {
//
//	int a = 25;
//	int b = 30;
//	int max = 0;
//	
//	max = MAX(a, b);
//	printf("%d\n", max);
//	/*if (a > b)
//* 
//		printf("较大值是：%d\n", a);
//	else
//		printf("较大值是：%d\n", b);*/
//	return 0;
//}
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else if (y > x)
//		return y;
//	else
//		return(x|y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	printf("输入两个操作数：->");
//	scanf("%d%d", &a, &b);
//	sum = MAX(a, b);
//	printf("较大的数是：%d\n", sum);
//
//	return 0;
//
//}




// study code.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//#include <iostream>
//
//int main()
//{
//    std::cout << "Hello World!\n";
//}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
