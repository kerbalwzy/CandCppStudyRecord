#include <stdio.h>

int main()
{
	int a = 250;
	double b = a; // 把a的内容取出来 这个数值转换为double, 再赋值给b; 编译器自动完成---隐式转换
	printf("b = %lf\n", b);

	// 人为转换的---强制类型转换
	// 格式:	(类型)变量名 or (类型)常量
	int c = 5;
	int d = 2;
	b = (double)c / d;
	printf("b = %lf\n", b);

	b = (double)5 / d;
	printf("b = %lf\n", b);

	// 类型占用空间小的往类型占用空间大的转换,没有问题
	char e = 127;
	int f = (int)e;
	printf("f = %d\n", f);

	// 类型占用空间大的往类型占用空间小的转换,可能出现越界问题
	f = 111;
	e = (char)f;
	printf("e = %d\n", e);

	f = 333;
	e = (char)f; // 无符号char最大数值为255, 333会出现越界
	printf("e = %d\n", e);
	return 0;
}

