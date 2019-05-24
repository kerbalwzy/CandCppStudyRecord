#include <stdio.h>

int main()
{
	int a = 20;
	while (a > 10) {
		scanf("%d", &a);
		printf("a = %d\n", a);
	} 

	int b = 1;
	do {
		b++;
		printf("b = %d\n", b);
	} while ( b < 10 );

	int i;
	int sum = 0;
	for (i = 0; i < 5; i++) {
		sum += i;
	}
	printf("sum = %d\n", sum);

	return 0;
}
