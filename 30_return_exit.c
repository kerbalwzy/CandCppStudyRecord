#include <stdio.h>
#include <stdlib.h>


// return 和 exit 的区别
// return 会终止当前函数, 但是如果在完成该函数的调用后还有其他代码需要执行,会继续运行
// exit 会终止当前程序, 直接退整个程序的运行

void test_return()
{
	printf("this is a test for return\n");
	return;
	printf("this print will not call");
}

void test_exit()
{
	printf("this is a test for exit\n");
	exit(0);
}

int main()
{
	test_return();
	printf("test for return over\n");
	test_exit();
	printf("test for exit over, but the print will not be call");
	return 0;

}
