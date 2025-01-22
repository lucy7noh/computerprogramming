//HW4_3_1 20230791 컴퓨터학과 노윤선

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int xPoswer(int x, int y);
int main(void)
{
	int x, y;
	printf("Enter two numbers: ");
	scanf("%d %d", &x, &y);
	printf("%d의 %d승은 %d이다\n", x, y, xPower(x, y));
}
int xPower(int x, int y)
{
	if (y == 0)
		return 1;
	else
		return xPower(x, y - 1) * x;
	   }