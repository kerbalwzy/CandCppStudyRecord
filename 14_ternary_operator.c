#include <stdio.h>

int main ()
{
	int a = 10;
	int b = 20;
	int c;

	// 普通条件语句给变量c赋值
	if (a > b){
		c = a;
	}else{
		c = b;
	}
	printf("c1 = %d\n", c);

	// 通过三目运算给变量c赋值
	a = 3;
	b = 2;
	c = (a > b ? a : b);
   	printf("c2 = %d\n", c);
	
	return 0;
}

