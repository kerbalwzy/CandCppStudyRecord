#include <stdio.h>
#include <string.h>

int main()
{
	// strlen:
	// 获取字符串内容长度, 不包含'\0', 遇到'\0'结束
	// 参数: 字符数组名(字符串首字符地址),
	// 返回值: 字符数组长度, size_t 类型:unsigned int
	char s1[] = "abc";
	printf("s1: %lu, %lu\n", strlen(s1), sizeof(s1));	// 结果: 3, 4
	// sizeof:测数据类型大小, 不会因为内容而改变类型大小
	char s2[10] = "abc";
	printf("s2: %lu, %lu\n", strlen(s2), sizeof(s2));	// 结果: 3, 10
	char s3[] = "abc\0def";
	printf("s3: %lu, %lu\n", strlen(s3), sizeof(s3));	// 结果: 3, 8
	char s4[] = "abc\012f";  // '\012'是一个八进制转义字符, 就是'\n'
	printf("s4: %lu, %lu\n", strlen(s4), sizeof(s4));   // 结果: 5, 6
	

	// strcpy:
	// 将源字符串内容复制到目标字符串(从目标字符串开头替换字符), 包含'\0'
	// 参数: dst 目标字符数组名, src 源字符数组名
	// 返回值: 成功-dst字符串首字符地址, 失败-NULL
	char src[] = "hello world";
	char dst[100] = "012345678910111213";	// dst字符数组的类型大小一定要不小于src字符数组的类型大小
	strcpy(dst, src);
	printf("dst = %s\n", dst);	// 结果: hello world


	// strncpy:
	// 将源字符串的部分内容复制到目标字符串, 是否包含'\0',取决指定的长度中是否包含了这个字符
	// 参数: dst-目标字符数组名, src-源字符数组名, n-要复制的长度(源字符数组的前N个)
	char dst1[100] = "qqqqqqqqqqqqqqqqqqq";
	strncpy(dst1, src, 5);
	printf("dst1.1 = %s\n", dst1);  // 结果: helloqqqqqqqqqqqq
	// 打印结果还包换了dst1[5:]的内容, 如果想要去掉可以手动修改dst1[5] = '\0', 这样打印会到hello就截止
	strncpy(dst1, src, sizeof(src)/sizeof(src[0]));
	printf("dst1.2 = %s\n", dst1);  // 结果: hello world
	// 打印内容与strcpy后的dst一致, 因为在指定的长度N中包含了'\0' 	
	

	// strcat:
	// 将源字符串的内容追加到目标字符串, 从目标字符串的第一个'\0'字符出现的位置插入追加
	// 参数: dst-目标字符数组名, src-源字符数组名
	// 返回值:成功-dst, 失败-NULL
	char dst2[100] = "abc";
	strcat(dst2, src);
	printf("dst2 = %s\n", dst2);	// 结果: abchello world

	
	// strncat:
	// 将源字符串的部分内容追加到目标字符串, 从目标字符串的第一个'\0'字符出现的位置插入追加
	// 参数: dst-目标字符数组名, src-源字符数组名, n-要追加的长度(源字符数组的前N个)
	char dst3[100] = "bbb";
	strncat(dst3, src, 5);
	printf("dst3 = %s\n", dst3);	// 结果: bbbhello

	
	// strcmp: 
	// 比较两个字符数组的大小, 
	// 一个个元素的比较, 比较的是字符的ASCII码值, 如果相等则比较下一个, 直到遇到不相等或者遇到结束符'\0'为止
	// 参数: s1-字符数组1, s2-字符数组2
	// 返回值: linux-,返回为最后比较的两个字符的ASCII码的差值; windows-0、1、-1
	char s001[] = "abc";
	char s002[] = "Abc";
	char s003[] = "abcHello";
	int flag001 = strcmp(s001, s002); 	// a-97, A-65 , 差值为32
	printf("flag001 = %d\n", flag001); 
	int flag002 = strcmp(s001, s003);	// \0-0, H-72, 差值为-72
	printf("flag002 = %d\n", flag002);

	
	// strncmp:
	// 比较两个字符数组中指定数量的字符的大小
	int flag003 = strncmp(s001, s003, 3);	// a-97, a-97, 差值为0
	printf("flag003 = %d\n", flag003);

	// sprintf:
	// 将字符串输出到一个字符数组
	// 参数: 目标字符数组名, 被输出的字符串
	// 返回值: 成功-返回输入到字符数组的字符个数; 失败-返回-1
	int x = 10, y = 20;
	char s004[100];
	// printf("x = %d, y = %d", x, y);  //直接输出到屏幕
	sprintf(s004, "x = %d, y = %d", x, y);	// 输出到s004字符数组
	printf("%s\n", s004);	// 结果: "x = 10, y = 20"
	sprintf(s004, "xixixi");
	printf("%s\n", s004);	// 结果: “xixixi

	// sscanf:
	// 从目标字符串格式化读取数据
	// 参数: 源字符数组, 格式化字符串, 目标变量的指针
	char s005[] = "a = 10, b = 20";
   	int a, b;
	sscanf(s005, "a = %d, b = %d", &a, &b);
	printf("a:%d, b:%d\n", a, b);	// 结果: "a:10, b:20"
	
	// strchr:
	// 在字符数组中查找某个字符第一次出现的索引值
	// 参数: 源字符数组名, 目标字符
	// 返回值: 成功-返回目标字符第一次出现的地址(指针对像), 失败-返回NULL
	char s006[] = "hello world";
	char * p0 = strchr(s006, 'o');
	if (p0 != NULL) {
		printf("p = %s\n", p0);  // 从p_o的地址开始打印内容, 直到遇到字符'\0', 结果: "o world"
	}

	// strstr:
	// 在源字符数组中查找某个目标字符数组(字符串)第一次出现时的目标字符数组的第一个字符在源字符数组中地址
	// 参数: 源字符数组, 目标字符数组
	// 返回值: 成功-目标字符数组的第一个字符在源字符数组中出现的地址, 失败-NULL
	char * p1 = strstr(s006, "llo");
	if (p1 != NULL) {
		printf("p = %s\n", p1);	 // 结果: llo world 
	}
	

	return 0;
}
