#include <stdio.h>
#include <stdlib.h>  // srand() >> 用来设置种子的函数; rand() >> 用来获取随机数的函数 
#include <time.h>  // time() >> 用来获取当前系统时间的函数 
int main()
{
	// 设置种子, 设置一次就够了, 如果种子是一个固定的数值,则每次生成的随机数都是固定的那几个
	// 通过time(NULL) 可以获取系统当前时间, 让这个时间作为种子,则可以保证每次执行时的种子不一样
	
	// 设置种子
	srand( (unsigned int)time(NULL) );  // srand()希望接受的参数类型是无符号整数,所以进行强制类型转换
	
	// 获取随机数并打印
	int num;
	for (int i = 0; i < 5; ++i) {
		num = rand();
		printf("num = %d\n", num);
	}

	return 0;
}
