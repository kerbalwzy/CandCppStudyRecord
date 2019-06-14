#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
 * C语言中的函数传参数本质上都是值传递, 
 * 当实参是变量名时, 传递的是变量内存保存的值;
 * 当实参是&变量名时, 传递的是变量名的地址值, 但为了好区分对原变量值的影响, 我们将这种称为地址传递(引用传递、指针传递)
 */ 
void func0(int a) 
{
	a = 100;	// 这里相当于给一个函数内部局部变量a重新赋值为100, 不会影响main中的a
	printf("a in func0 = %d\n", a);
}

void func1(int * p)
{
	*p = 100;	// *p == *(&a) ;实际上操作了变量a代表的内存, 所以会造成a的改变
	printf("*p in func1 = %d\n", *p);
}

//void func2(int b[100])	// 函数的形参中的数组实际上指针变量
//void func2(int b[])	// 和上面的定义等价
void func2(int * b)	// 和上面的定义等价
{
	printf("sizeof(b) = %lu\n", sizeof(b));		// 测试结果为指针变量的固定大小(4or8), 如果是数组应该是数组的总空间大小
	int c;
	b = &c;	// 编译不报错, 如果是数组, 数组名为常量, 不允许修改的
	*b = 100;

}

// 通过函数操作数组
void print_array(int *p, int n)
{
	for (int i=0; i < n; i++)
	{
		printf("%d, ",p[i]);
	}
	printf("\n");
}

void set_random_array(int *p, int n)	// 给数组添加2位数的随机数作为元素
{
	srand((unsigned int)time(NULL));	// 设置随机种子
	for (int i=0; i < n; i++) {
		*(p + i) = rand() % 100;	// 获取两位随机数, 赋值给*(p + i)所操作的内存
	}

}

void sort_array(int *p, int n)	// 通过冒泡排序法, 对数组进行排序
{
	int tmp;
	for (int i=0; i < n-1; i++)
   	{
		for (int j=0; j < n-1-i; j++)
	   	{
			if (p[j] > p[j+1]) 
			{
				tmp = p[j];
				p[j] = p[j+1];
				p[j+1] = tmp;

			}  
		}
	}

}

// 函数返回局部变量的地址
char * func3()
{
	char str[] = "abc";
	return str;	// &str[0], 
	// 返回的局部变量的地址在函数外部不能被用去操作内存,
	// 因为函数执行完毕后, 局部变量的空间就被回收了,
	// 此时在外部被保存的这个地址就变成了野指针 
}


int main()
{
	int a = 10;
	
	func0(a);	// 这里是值传递,函数内部对参数, 修改不会影响到a	
	printf("a after func0 = %d\n", a);

	func1(&a);	// 这里是地址传递, 函数内部对参数修改影响到a
	printf("a after func1 = %d\n", a);
	
	int b[10];
	func2(b);	// 函数形参中的数组其实是指针变量
	set_random_array(b, 10);	// 给数组b添加随机数作为元素
	print_array(b, 10);

	sort_array(b, 10);	// 通过冒泡排序法, 对数组排序
	print_array(b, 10);

	char *c;
	c = func3();
	printf("c = %s\n", c);	// 打印结果为乱码, 因为指向的内存已经被系统回收, 不允许用户再使用


	return 0;
}

