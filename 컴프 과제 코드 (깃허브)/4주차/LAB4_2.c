//LAB4_2 20230791 컴퓨터학과 노윤선
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sum_rec(int);
void main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum_rec(n));
}

// 재귀함수 이용
int sum_rec(int n)
{
	int result;
	printf("sum_rec(%d) 시작함\n", n);
	if (n == 1) {
		printf("sum_rec(%d) 끝냄\n", n);
		return 1;
	}
	else {
		result = n + sum_rec(n - 1);
		printf("sum_rec(%d) 끝냄\n", n);
		return result;
	}
}