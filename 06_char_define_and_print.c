#include <stdio.h>

int main()
{	// 字符串变量用于存储一个单一字符, 每个字符变量都会占用1个字节
	// 字符变量实际上并不是吧该字符本身放到变量的内存中去, 而是将该字符对应的ASCII编码放到变量的存储单元中
	char ch = 'a';

	printf("sizeof(ch) = %u\n", sizeof(ch));

	printf("ch[%%c] = %c\n", ch); // 直接打印字符
	printf("ch[%%d] = %d\n", ch); // 打印 'a' 的ASCII的值

	char A = 'A';
	char a = 'a';
	printf("a = %d\n", a);
	printf("A = %d\n", A);

	printf("A = %c\n", 'a' - 32); // 小写a转大写A
	printf("a = %c\n", 'A' + 32); // 大写A转小写a

	ch = ' ';
	printf("空字符:%d\n", ch); // 空格字符的ASCII的值为32
	printf("A = %c\n", 'a' - ' '); // 小写a转大写A
	printf("a = %c\n", 'A' + ' '); // 大写A转小写a
	
	return 0;
}
