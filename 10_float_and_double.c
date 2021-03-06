#include <stdio.h>
/*实数变量也可以成为浮点变量, 浮点型变量用来存储小数数值.
 * 在C语言中， 浮点型变量分为两种： 单精度浮点数(float)、 双精度浮点数(double)， 
 * 但是double型变量所表示的浮点数比 float 型变量更精确。
 *
 * float 	4字节	7位有效数字
 * double 	8字节	15~16位有效数字
 *
 * 由于浮点型变量是由有限的存储单元组成, 因此只能提供有限的有效数字, 在有效位意外的数字将被舍去
 * 这样可能会产生一些误差
 *
 * 不以f结尾的常量是double类型, 以f结尾的常量(如:3.14f)是float类型
 */ 

int main() {
	// 传统方式赋值
	float a = 3.14f; // 或者 3.14F
	double b = 3.14;

	printf("a = %f\n", a);
	printf("b = %e\n", b);

	// 科学计数法赋值
	a = 3.2e3f; // 3.2 * 10 ^ 3 = 32000, e 可以写 E
	printf("a1 = %f\n", a);
	a = 100e-3f; // 100 * 10 ^ -3 = 0.1
	printf("a2 = %f\n", a);

	a = 3.1425926f;
	printf("a3 = %f\n", a); // 结果为 3.141593

	return 0; 
}
