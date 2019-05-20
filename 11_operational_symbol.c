#include <stdio.h>

int main()
{
	// 常用的运算符有: 
	// 算术运算符
	// 赋值运算符
	// 比较运算符
	// 逻辑运算符
	// 位运算符
	// sizeof运算符 -- 用于求字节长度
	
	// 算术运算符中的 前置++ 和 后置++ 的规律,「前置-- 与 后置-- 规律相同」
	int a, i;
   	i = 0;
	a = ++i; // 前置++, 先加后用
	printf("a = %d, i = %d\n", a, i);
	
	i = 0;
	a = i++; // 后置++, 先用后加
	printf("a = %d, i = %d\n", a, i);

	i = 0;
	i++;
	a = i;
	printf("a = %d, i = %d\n", a, i);

	return 0;	
}
