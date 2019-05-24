#include <stdio.h>

int main()
{
	char c;
	c = getchar();

	switch(c){  // 参数只能是整型变量
		case '1':  // 这里是字符1, 本质上是int类型
			printf("OK\n");
			break;  // switch遇到break时会中断, 不在往下执行
		case '2':
			printf("NOT OK\n");
			break;
		default:  // 如果上面的判断都不成立则会执行defautl下分支的代码
			printf("This id default, Are You Ok?\n");

	}

	return 0;
}
