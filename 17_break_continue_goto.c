#include <stdio.h>

int main()
{	// break 用来终止循环
	int i = 0;
	while (1) {
		i++;
		printf("i = %d\n", i);
		if ( 10 == i ) {
			break;  // 中断while循环,跳出
		}
	}

	int flag = 0;

	for (int m = 0; m < 10; m++) {
		for (int n = 0; n < 10; n++) {
			if (5 == n) {
				flag = 1;
				printf("Ready to break 1\n");
				break;  // 跳出当前的for循环「for (n; n < 10; n++)」
			}
		}
		if (1 == flag) {
			printf("Ready to break 2\n");
			break; // 跳出当前的for循环「for (m; m < 10; m++)」
		}
	}
	

	// continue 用来回到循环开始的地方
	int sum1 = 0;
	for (int a = 1; a < 100; a++) {
		if (a % 2 == 0) {
			// 如果a是一个偶数,则执行continue, 回到循环开始的地方继续下一次的循环
			continue;
		}
		sum1 += a; // 实际上就是在计算1-99中所有奇数的和
	}
	printf("sum1 = %d\n", sum1);

	// goto 无条件跳转到某个标识处,然后再往下执行代码. 即跳过goto SomeTag 到 SomeTag之间的代码
	goto SomeTag;
	printf("aaaaaaaaaa\n");

SomeTag:
	printf("bbbbbbbb\n");

	return 0;

}
