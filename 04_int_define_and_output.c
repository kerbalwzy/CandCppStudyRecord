#include <stdio.h>

int main()
{
	int a = 123; // 定义变量a, 以十进制方式赋值为123
	int b = 0567; // 定义变量b, 以八进制方式赋值为0567
	int c = 0xABC; // 定义变量c, 以十六进制方式赋值为0xABC

	printf("a = %d\n", a);
	printf("八进制: b = %o\n", b);
	printf("十进制: b = %d\n", b);
	printf("十六进制-小写: c = %x\n", c);
	printf("十六进制-大写: c = %X\n", c);
	printf("十进制: c = %d\n", c);

	unsigned int d = 0xffffffff; // 定义无符号int变量d, 以十六进制方式赋值
	printf("有符号方式打印: d = %d\n", d);
	printf("无符号方式打印: d = %u\n", d);

	return 0;

}
