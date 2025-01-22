#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
static int sum;
int calFruit(int n)
{
	// 코드 작성
	if (n < 10)
		return n % 10 + sum;
	else
		return n % 10 + calFruit(n / 10);
}


int main(void) //변경하지 말라
{
	int n;

	scanf("%d", &n);
	sum = n;
	printf("%d\n", calFruit(n));
}