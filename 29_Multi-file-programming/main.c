#include <stdio.h>
#include "utils.h"

// 函数声明写在xxx.h(这里是utils.h)的头文件中
// 头文件中声明函数需要定义在对应的xxx.c(这里是utils.c)文件中
// 调用函数的文件(这里是mian.c)中需要包含xxx.h头文件

int main() 
{	
	int a = 10, b = 20;
	int max_num, min_num;

	max_num = max(a,b);
	printf("max_num = %d\n", max_num);
	min_num = min(a,b);
	printf("min_num = %d\n", min_num);

	return 0;
}
