#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//汉诺塔问题为经典的递归调用实例
//分析：将n个盘子从A座上移到C座上需要三步：
//1.将A上的n - 1个盘子借助C座先移到B座上；
//2.把A座上剩下的一个盘子移到C座上；
//3.将n - 1个盘从B座上借助于A移到C座上。
void move(char x, char y)	//输出移盘方案
{
	printf("%c->%c\n", x, y);
}
void hanoi(int n, char one, char two, char three)		//移盘
{
	if (n == 1)
		move(one, three);		//如果是1个盘，直接从第一个座移到第3个座上
	else
	{
		hanoi(n - 1, one, three, two);
		move(one, three);
		hanoi(n - 1, two, one, three);
	}
}
int main()
{
	int n;
	printf("输入盘的个数\n");
	scanf("%d", &n);
	printf("移盘的步骤：\n");
	hanoi(n, 'A', 'B', 'C');
	system("pause");
	return 0;
}