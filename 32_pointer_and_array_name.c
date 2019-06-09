#include <stdio.h>

int main()
{

	// 数组名称是数组的首元素地址, 但是它又是一个常量, 不能修改
	int a[] = {1,2,3,4,5,6};
	printf("a = %p, &a[0] = %p\n", a, &a[0]);

	// 通过指针操作数组的元素
	int n = sizeof(a) / sizeof(a[0]);
	for (int i=0; i < n; i++) {
		// printf("%d, a[i]");
		printf("%d, ", *(a + i));	// 当a是一个指针时, a[i] == *(a + i)
	}
	printf("\n");

	int * p = a;	// 定义一个指针变量保存a的地址, 这里其实等价于 int * p = &a[0]
	for (int i=0; i < n; i++) {
		p[i] = 2 * i;	// p[i] == *(p + i) == *(&a[0] +i )
	}
	for (int i=0; i < n; i++) {
		printf("%d, ", *(p + i));	// *(p + i) == p[i] == a[i]
	}
	printf("\n");


	// 指针加减法运算
	/* 指针计算不是简单的整数加减
	 * 如果是一个int *, +1的结果是增加一个int的大小; 如果是一个char *, +1的结果是增加一个char的大小
	 * 指针的加减运算的单位是这个指针指向的数据的类型大小
	 */
	int b;
	int * p1 = &b;
	printf("p1 = %p\n", p1);
	p1 += 1;	// 移动了1个int大小, 实际上地址编号的16进制值会加4, 因为int类型的数据大小为4字节
	printf("p1 +=2; p1 = %p\n", p1);

	char c;
	char *p2 = &c;
	printf("p2 = %p\n", p2);
	p2++;		// 移动了1个char大小,实际上地址编号的16进制值会加1, 因为char类型的数据大小为1字节
	printf("p2++; p2 = %p\n", p2);

	// 通过改变指针变量保存的地址值操作数组元素
	// 加法运算示例
	int a1[] = {1,2,3,4,5,6};
	int n1 = sizeof(a) / sizeof(a[0]);
	int * p3 = a1;
	for (int i=0; i<n; i++) {
		printf("%d, ", *p3);
		p3++;
	}
	printf("\n");
	// 减法运算示例
	int * p4 = a1 + n1 -1;
	for (int i=0; i < n; i++) {
		printf("%d, ", *p4);
		p4--;
	}
	printf("\n");
	// 减法运算示例2:
	int * p5 = &a[0];	// 第0个元素的地址
	int * p6 = &a[1];	// 第1个元素的地址
	
	printf("p5 = %p. p6 = %p\n", p5, p6);
	int n2 = p6-p5; // n2 = 1; // 表示的是这两个元素之间的步长
	int n3 = (int)p6 - (int)p5; // n3 = 4; // 进行强制类型转换后才是真的计算这两个地址数值的差
	printf("p6-p5 = n2= %d, (int)p6-(int)p5 = n3 =%d\n", n2, n3);
	
	return 0;

}



