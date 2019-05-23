#include <stdio.h>

int main()
{
	int a;
	printf("please input your salary: ");
	scanf("%d", &a);
	if (a <= 0)
	{
		printf("梦游\n");
	}
	//else if(0 < a && a < 5000 )  // 0 < a 是多余的
	else if (a < 5000)
	{
		printf("深圳游\n");
	}
	else if (a < 10000)
	{
		printf("省内游\n");
	}
	else 
	{
		printf("国内游或者环球游\n");
	}
	return 0;
}
