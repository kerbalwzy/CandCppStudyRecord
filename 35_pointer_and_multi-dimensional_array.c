#include <stdio.h>
/*
 * 多维数组的地址不是多级指针
 * 定义指针变量接收多维数组名时, 需要使用的指针变量类型是 数组指针
 */ 

int main()
{
	int a[3][4];
	printf("%p, %p, %p\n", a, *a, a[0]);	// *a == *(a + 0) == a[0]

	int ** p = (int **)a;
	printf("%p, %p, %p\n", p, *p, a[0]);	// 通过打印结果发现*p的值与p和a[0]的值不一样, 说明: 多维数组的地址不是多级指针	

	// 数组指针, 指向数组的指针类型
	int (*p1)[4] = a;
	printf("%p, %p, %p\n", p1, *p1, a[0]);

	int b[3][4][5];
	int (*p2)[4][5] = b;
	printf("%p, %p, %p\n", p2, *p2, b[0]);
	
	return 0;
}
