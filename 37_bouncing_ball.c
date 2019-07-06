#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/select.h>
#include <fcntl.h>

// 在终端完成一个弹跳小球的动画,当键盘按下control + c 时退出动画、

extern void SetNotFlag(int fd);			// 声明取消标准输入阻塞的函数
extern int CheckInput();			    // 声明用户是否退出动画的函数
int main()
{
	int x = 0, y = 5;
	int velocity_x = 1;
	int velocity_y = 1;
	int left = 0, top = 0, right = 20, bottom=10;

	int i, j;
	SetNotFlag(0);

	while (1) 
	{
		system("clear");
		// 检查是否退出
		if (CheckInput()) 
		{
			exit(0);
		}


		// 打印移动效果(移动偏移量)
		x += velocity_x;
		for (i=1; i < x; i++) 
		{
			printf("\n");
		}

		y += velocity_y;
		for (j=1; j < y; j++)
		{
			printf(" ");
		}

		// 打印小球
		printf("o\n");
		
		// 检查边界值
		if( x == bottom || x == top )
		{	
			// 当x到达边界, 切换移动的方向
			printf("\a");
			velocity_x = -1 * velocity_x; 
		}
		if( y == right || y == left )
		{	
			// 当y到达边界, 切换移动的方向
			printf("\a");
			velocity_y = -1 * velocity_y; 
		}
		usleep(5*10000);
	}

	return 0;
}

void SetNotFlag(int fd)
{
	// 首先去获取文件标记
	int flag = fcntl(fd, F_GETFL);
	if (flag < 0 )
	{
		perror("fcntl");
		return;
	}
	// 将其设置为非阻塞
	fcntl(fd, F_SETFL, flag|O_NONBLOCK);
}

int CheckInput()
{
	// 检查用户是否输入了control + c
	char buf[1024] = {0};
	ssize_t read_size = read(0, &buf, sizeof(buf)-1);
	if (0 == read_size) 
	{
		return 1;
	}

	return 0;
}
