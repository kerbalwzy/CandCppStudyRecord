#include <stdio.h>
#include <string.h>

int main()
{
	// strtok:
	// 以某个字符串分割字符数组
	
	char str[] = "abc,hello,nihao,xixi";
	char str001[100];
	strcpy(str001, str);
	char * p;

	// 首次调用, 第一个参数为源字符数组名, 第二个参数为分割字符串
	// 从首元素开始找匹配切割字符串, 如果找到匹配字符,将这个字符替换为'\0'
	// 								 如果美誉找到匹配字符, 直接返回字符串首元素的位置
	// 返回值为首元素地址
	p = strtok(str, ",");  // 此时: str[] = "abc\0hello,nihao,xixi"
	printf("p = %s, str = %s\n", p, str);
	
	// 非首次调用, 第一个参数写NULL, 表示跳过上一步处理的'\0', 然后找",":
	// 			   如果找不到, 同时到了结束符名,则直接返回本次查找的开始地址
	// 			   如果找到了, 则将这个位置的字符替换为'\0'
	p = strtok(NULL, ",");
	printf("p = %s, str = %s\n", p, str);

	// 正常的用法如下:
	p = strtok(str001, ",");
	while (p != NULL) {
		printf("p = %s\n", p);
		p = strtok(NULL, ",");
	}
	return 0;

}
