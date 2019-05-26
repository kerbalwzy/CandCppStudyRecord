#include <stdio.h>

int main()
{	
	// 定义一个二维数组, 名字叫做 a
	// a 由3个一维数组组成, 类型都是 int[4], 这个3个一维数组的名称分别是a[0], a[1], a[2]
	int a[3][4];

	// 给二维数组中的每个元素赋值
	int temp = 0;
	for (int i=0; i<3; i++) {
		for (int j=0; j<4; j++) {
			a[i][j] = temp++; 		//后置++, 先用后加
		}
	}	

	// 遍历数组, 输出每个元素的值
	for (int i=0; i<3; i++) {
		for (int j=0; j<4; j++) {
			printf("%d, ", a[i][j]);
		}
		printf("\n");
	}

	printf("\n");
	// 二维数组的初始化
	// 分段赋值
	int b[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	for (int i=0; i<3; i++) {
		for (int j=0; j<4; j++) {
			printf("%d, ", b[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	// 连续赋值
	int c[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	for (int i=0; i<3; i++) {
		for (int j=0; j<4; j++) {
			printf("%d, ", c[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	// 只给部分元素初始值, 未初始化的元素则为0
	int d[3][4] = {1,2,3,4};
	for (int i=0; i<3; i++) {
		for (int j=0; j<4; j++) {
			printf("%d, ", d[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	// 所有成员都初始化为0
	int e[3][4] = {0};
	for (int i=0; i<3; i++) {
		for (int j=0; j<4; j++) {
			printf("%d, ", e[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	// []中不定义元素的个数时, 定义数组时必须进行初始化;
	int f[][4] = {1,2,3,4,5,6,7,8};
	for (int i=0; i<sizeof(f)/sizeof(f[0]); i++) {
		for (int j=0; j<sizeof(f[0])/sizeof(f[0][0]); j++) {
			printf("%d, ", f[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	// 二维数组强化训练, 计算各科目的平均成绩与不及格人数
	// 二维数组: 五行三列
	// 行代表人: 01-05号人员
	// 列代表科目: 语数外,
	// 行列交叉点: 某人的某学科成绩
	
	// 初始化原始成绩数据
	float grade[5][3] = {
		{80,75,56},
		{59,65,71},
		{59,63,70},
		{85,45,90},
		{76,77,45}
	};
	
	// 定义一个数组,保存各学科的不及格人数 
	int fail_count[3]={0};
	// 定义一个数组, 保存各学科的平均成绩
	float grade_avg[3] = {0};
	// 定义一个临时变量s, 用来保存各学科的总成绩
	float s = 0;
	
	for (int i=0; i<3; i++) {
		for (int j=0; j<5; j++) {
			s += grade[j][i];
			if (grade[j][i] < 60) {
				fail_count[i]++;
				printf("%d",i);
			}
		}
		grade_avg[i] = s/5;
		s = 0;
	}

	printf("各学科不及格人数:\n");
	for (int i=0; i<3; i++) {
		printf("%d, ", fail_count[i]);
	}
	printf("\n各学科平均成绩:\n");
	for (int i=0; i<3; i++) {
		printf("%.2f, ", grade_avg[i]);
	}
	printf("\n");

	return 0;
}
