#include <stdio.h>
#include <stdlib.h>

int main()
{
	// 字符数组转整型
	// 方式一: 使用atoi, 可以自动跳过\r, \n, \t, 空格等字符
	char str[] = "\n \t \r -123";
	int a = atoi(str);
	printf("a = %d\n", a);
	// 方式二: 使用sscanf
	int b;
	sscanf(str, "%d", &b);
	printf("b = %d\n", b);

	// 整型转字符数组
	// 方式一: 使用sprintf
	int num = -234;
	char buf[100];
	sprintf(buf, "%d", num);
	printf("buf = %s\n", buf);

	return 0;
}
