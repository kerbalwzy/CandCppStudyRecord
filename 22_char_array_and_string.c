#include <stdio.h>

int main()
{	
	// 字符'0', 是有效字符串, 它的ASCII码是48
	// '\0',数字 0, 等价, 可以用来做字符串结尾标识符
	printf("%d, %d, %d \n", '0', '\0', 0);


	// C语言中有字符串常量"abc", 但是没有字符串这种数据类型, 但是可以通过char的数组来代替;
	// 字符串一定是一个char的数组, 但是char的数组不一定是一个字符串
	// 数字0(和字符'\0'等价)结尾的char数组就是一个字符串,
	// 但是如果char数组没有以数字0结尾,那么就不是一个字符串, 只是普通字符数组,所以字符串是一种特殊的char的数组
	
	char c1[] = {'a', 'b', 'c'};  // 普通字符数组 
	printf("c1 = %s\n", c1);  // 可能出现乱码(VS中编译后运行就很大可能出现乱码), 因为没有'\0'字符结尾

	// 以'\0'('\0'就是数字0)结尾的数组就是字符串
	char c2[] = {'a', 'b', 'c', '\0'};  // 字符串
	printf("c2 = %s\n", c2);

	// 字符串处理以'\0'作为结束符, 后面的其他字符就不会再输出了
	char c3[] = {'c', 'p', 'r', 'o', 'g', 0, 'h', 'e', 'l', 'l', 'o', '\0'};
	printf("c3 = %s\n", c3);
	// %s 的原理, 打印字符串数组, 从首元素开始, 直到遇到 '\0', 相当下面的代码
	int i = 0;
	while (c3[i] != '\0') {
		printf("%c", c3[i]);
		i++;
	}
	printf("\n");

	// 字符数组初始化的两种方式
	char str1[] = {'a','b', 'c', '\0'}; // 第一种方式,一个个元素初始化
	char str2[] = "abc"; 				// 第二种方式, 通过字符串常量初始化, 这种更加方便, 字符串常量最后隐藏了一个'\0'
	printf("%lu, %lu\n", sizeof(str1), sizeof(str2));

	char str3[] = "hello 0 world";	// 这里的0 是字符0, ASCII码是 48
	char str4[] = "hello \0 world"; // \0等价于数字0, ASCII码是0 是字符串的结束符号, 打印时到这结束
	printf("str3 = %s, str4 = %s \n",str3, str4);

	// 字符串的输入输出
	char buff[10];  // 最多输入9个字符, 有一个是留给'\0'的, 如果超出, 则会出现缓冲区溢出, 报错
	printf("请输入字符串: ");
	scanf("%s", buff);  
	// 不需要使用取地址符, 因为数组名, 本身就是地址; 
	// 并且在接受字符串时, 以空格隔开. 即如果输入的字符串是"abc efg",则只会取到abc
	printf("%s\n", buff);

	return 0;
}