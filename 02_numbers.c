#include <stdio.h>

int main()
{
	int a = 123; // 十进制方式赋值
	int b = 0123; // 八进制方式赋值, 以数字0开头
	int c = 0x9Ef; // 十六进制方式赋值, 以0x开头, 字母大小写都可以, 推荐都使用大写
	
	// C语言中不能直接书写二进制数字

	// 如果在printf中格式化输出一个十进制数字那么用%d, 八进制用%o, 十六机制用%x
	printf("十进制: %d\n", a);
	printf("八进制: %o\n", b);
	printf("十六进制: %x\n", c);
	
	return 0;
}

