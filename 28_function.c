#include <stdio.h>
#include <string.h>

// 函数可以分为四种:
//
// 无参数无返回值:
void func_01() {
	printf("无参数无返回值函数\n");
	// 无返回值: 定义时使用void关键字, 函数名后的小括号内没有形参, 调用时也不能去接收返回值
}


// 有参数无返回值:
void func_02(int a, int b) {
	int c = a+b;
	printf("a + b = %d\n", c);
	// 函数名后的小括号内的形参在定义时, 不能 int a, b 这样写, 必须分开声明

}

// 无参数有返回值:
int func_03(){
	int a = 100, b = 150;
	int c;
	c = a + b;
	return c;
	// 函数的返回值是什么数据类型, 函数名前就写哪个类型的关键字, 在返回值时,如果数据类型与定义不一致,也会强行转化为定义的类型
	// 当然函数的返回值也不是必须要去接收使用
}


// 有参数有返回值:
char func_04(char str[]) {
	return str[0];
	// 当形参是数组时, []号内不用写长度
}

// 函数可以先声明, 再去定义
// 所谓声明, 就是在函数尚未定义的情况下,事先将该函数的有关信息通知编译系统, 相当于告诉编译器, 函数在后面定义, 以便使编译器正常运行
// 一个函数只能被定义一次, 但是可以声明多次
// 声明: 将函数定义时的{}号换成分号;
// 声明时可以加extern关键字, 代表是作为外部函数
// 声明时形参变量名可以不写
int my_strlen(char str[]);
extern int my_strlen(char str[]);
extern int my_strlen(char []);


int main()
{	// 调用无参数无返回值函数
	func_01();

	// 调用有参数无返回值函数
	func_02(1, 2);
	int a=10, b=20;
	func_02(a, b);

	// 调用无参数有返回值函数
	int ret = func_03();
	int res;
	res = func_03();
	func_03();
	printf("ret = %d, res = %d\n", ret, res);

	// 调用有参数有返回值函数
	char dst[] = "hello world";
	char first;
	first = func_04(dst);
	printf("this first char of string = %c\n", first);

	// 调用先声明后定义的函数
	int lenght = my_strlen(dst);
	printf("lenght of dst = %d\n", lenght);
	int l1 = strlen(dst);
	printf("l1=%d\n", l1);

	return 0;
}

int my_strlen(char str[]) {
	int i=0;
	while (str[i] != '\0') {
		i++;
	}
	return i;
}
