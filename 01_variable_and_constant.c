#include<stdio.h>
#define MAX 10 // 宏定义一个常量,名字叫MAX, 值是10 
				// 常量的值一旦初始化不可改
int main() 
{
	int a; // 定义一个变量, 类型为int, 名字叫a

	const int b = 10; // 定义一个 const 常量, 名字叫b, 值为10
	// b = 10; // err,常量的值不能修改
	// MAX = 100; // err, 宏定义的常量的值也不能修改
	a = MAX; // 将 a 的值设置为 MAX 的值
	printf("%d\n",a);

	a = 123; // 将 a 重新赋值为123
	printf("%d\n", a);

	return 0;
}

