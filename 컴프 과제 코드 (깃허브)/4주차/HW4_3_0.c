//HW4_3_0 20230791 컴퓨터학과 노윤선

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int twoPower(int x);
int main(void)
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("2의 %d승은 %d이다\n", n, twoPower(n));
}
int twoPower(int x)
{
	if (x == 0)
		return 1;
	else
		return twoPower(x - 1) * 2;
	   }