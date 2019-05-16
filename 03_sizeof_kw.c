#include <stdio.h>

int main()
{	
	/* sizeof 是内置关键字, 不需要包含任何头文件, 功能是计算一个数据类型的大小, 单位为:字节
	 * sizeof 的返回值为 size_t 
	 * size_t 类型的值是一个无符号整数, 在格式化输出时,可以使用 %zu 或 %u
	 * 		当使用 %u 时, 在编译时会出现 warning 信息
	 */  

	int a;
	int b = sizeof(a); // 通过sizeof关键字得到指定值占用的内存大小, 单位为:字节
	printf("b = %d\n", b);

	size_t c = sizeof(a);
	printf("c = %u\n", c); // 用无符号整数的方式格式化输出c的值
	return 0;

}
