#include <stdio.h>

int main()
{
	char str1[100], str2[100];
	printf("请输入str1: ");
	// scanf 遇到空格,回车键, 结束本次读取, 剩下的内容没有丢弃, 留个下一次读取, 不是一个安全的方式
	// 即, 不能读取到空格和回车键
	scanf("%s", str1);
	printf("str1 = %s\n",str1);

	printf("请输入str3: ");
	scanf("%s", str2);
	printf("str2 = %s\n", str2);

	/*
	 * stdin 标准输入流, 键盘
	 * stdout 标准输出流, 屏幕
	 */ 
	setbuf(stdin, NULL); // 将默认缓冲区设置为无缓冲区, 清空缓冲区, 清楚scanf未读取的回车键

	char str3[100];
	printf("请输入str3: ");
	// gets 可以读取空格, 不能读取回车键, 遇到回车结束读取, 如果一次没有读完则留给下一次读取
	// 该函数已经被弃用, 编译时会有warning, 不是一个安全的方式
	gets(str3);
	printf("str3 = %s\n", str3);

	setbuf(stdin, NULL); // 将默认缓冲区设置为无缓冲区, 清空缓冲区, 清楚scanf未读取的回车键
	
	char str4[10];
	printf("请输入str4: ");
	// fgets 可以读取空格, 可以读取回车键, 遇到回车键时结束读取, 如果一次没有读完则留个下一次读取
	fgets(str4, sizeof(str4), stdin);
	// 读取内容存放懂str4, 最多一次读取sizeof(str4)-1个, 从stdin读取内容
	printf("str4 = |%s|\n", str4);
	
	return 0;
}
