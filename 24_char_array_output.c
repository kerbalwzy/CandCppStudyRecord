#include <stdio.h>

int main()
{
	char str[] = "hello";

	printf("%s\n", str); // 不会自动换行, 需要手动添加换行符

	puts(str); // 没有改变原字符数组, 但是会在打印时自动添加一个换行符
	 
	fputs(str, stdout); // 往stdout写内容, 不会自动换行
	fputs("\n", stdout); // 再输出一个换行符, 实现换行效果
	
	return 0;
}
