#include <stdio.h>

int main()
{
	int a[10];  // 定义一个数组,名字叫做a, 最多有10个元素, 每一个元素的类型都是整型, 索引值是0-9
	
	printf("定义了数值, 但没有进行初始化赋值操作, 尝试打印数组中的每一个元素: \n");
	for (int i = 0; i < 10; i++) {
		printf("%d, ", a[i]);  // 因为定义数组时并没有初始化值, 所以现在这里打印出的每个元素都是随机数
	}
	printf("\n");

	printf("遍历数组, 给数组中的每一个元素赋值, 赋值范围为 1-10\n");
	for (int i = 1; i <= 10; i++) {
		a[i-1] = i;  // 给元素赋值
	}
	for (int i = 0; i < 10; i++) {
		printf("%d, ", a[i]);  // 打印每个元素
	}
	printf("\n===============================================================\n");

	int b[5] = {1,2,3,4,5};  // 定义一个数组, 并初始化所有的元素
	printf("int b[5] = {1,2,3,4,5}\n");
	for (int i = 0; i < 5; i++) {
		printf("%d, ", b[i]);
	}
	printf("\n\n");

	int c[5] = {1,2,3};  // 定义一个数组, 并初始化前三个元素, 后面的元素会自动设置为0
	printf("int c[5] = {1,2,3}\n");
	for (int i = 0; i < 5; i++) {
		printf("%d, ", c[i]);
	}
	printf("\n\n");

	int d[5] = {0};  // 定义一个数组, 并初始化第一个元素为0, 同上一条性质, 则所有的元素均初始化为0
	printf("int d[5] = {0}\n");
	for (int i=0; i < 5; i++) {
		printf("%d, ", d[i]);
	}
	printf("\n===============================================================\n");
	
	int e[] = {1,2,3,4,5};  // 定义一个数组, 没有给定长度, 但是进行了初始化, 那么数组的长度由初始化的元素个数决定
	printf("int e[] = {1,2,3,4,5}\n");
	// 数组的变量名其实是一个指针类型, 保存的地址为数组中0号元素的内存地址
	int *p0 = &e[0];  // 定义一个指针变量, 并初始化为数组e中的0号索引的元素的内存地址
	printf("e=%p, &e[0]=%p\n", e, p0);

	// 获取数组的长度
	int length = sizeof(e)/sizeof(e[0]);  // 因为一个数组中的每个元素的数据类型都一样, 所以可以这么算, sizeof获取的数据占内存的大小
	for (int i=0; i<length; i++) {
		printf("%d, ", e[i]);
	}
	printf("\n");
		
	return 0;
}
