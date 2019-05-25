#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	// 一维数组逆序
	int a[]={1,2,3,4,5};

	int i=0;
	int j=sizeof(a)/sizeof(a[0]) - 1;  // 获取数组的最大索引值
	int temp; // 用来临时存放需要保存的值
	
	// 输出原始数组
	for (int i=0; i<sizeof(a)/sizeof(a[0]); i++) {
		printf("%d, ",a[i]);
	}
	printf("\n");
	
	// 逆序操作, 交换头尾相对位置上的值
	while (i < j) {
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
	// 输出逆序操作之后的数组
	for (int i=0; i<sizeof(a)/sizeof(a[0]); i++) {
		printf("%d, ",a[i]);
	}
	printf("\n");
	
	// 随机数数组冒泡排序
	printf("请输入数组的长度: ");
	int n;
	scanf("%d", &n);
	
	// 根据输入的长度, 生成元素为0-100之间的随机整数的数组
	int rand_array[n];
	srand((unsigned int)time(NULL));  // 设置随机数种子
	printf("生成的随机数数组是: ");
	for (int i=0; i<=n-1; i++) {
		temp = rand() % 100 + 1;  // 生成1-100中的某个随机数 
		rand_array[i] = temp;  // 生成1-100之间的随机数
		printf("%d, ",temp);
	}
	printf("\n");	

	// 将数组进行冒泡排序{不断比较挨着的两个元素, 将最大元素放到最后一位}, 要求升序排序
	for (int i=0; i<n-1; i++) {
		// 要冒泡 n-1 次
		for (int j=0; j < n-1-i; j++) {
			// 每次冒泡需要比较 n-1-i 次
			if (rand_array[j] > rand_array[j+1]) {
				temp = rand_array[j];
				rand_array[j] = rand_array[j+1];
				rand_array[j+1] = temp;
			}
		}
	}
	printf("进行冒泡排序后「升序」: ");
	for (int i=0; i<n; i++) {
		printf("%d, ",rand_array[i]);
	}
	printf("\n");

	return 0;

}
