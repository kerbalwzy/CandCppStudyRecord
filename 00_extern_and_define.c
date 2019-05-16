#include <stdio.h>

int main()
{
	extern int a; // 声明了变量 a , 但是没有给它建立存储空间
	a = 10; // err, 没有空间, 不可以赋值

	int b = 10; // 定义了一个变量 b ,类型为int, 并赋值为10

	return 0;
}
