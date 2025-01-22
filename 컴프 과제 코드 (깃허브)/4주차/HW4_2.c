//HW4_2 20230791 컴퓨터학과 노윤선

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int fibo(int n);
int main(void)
{
	int n, idx;
	printf("몇개의 피보나치 수열값을 출력할까요?(3보다 큰 정수):");
	scanf("%d", &n);
	for (idx = 0; idx < n; idx++)
	{
		printf("%d ", fibo(idx));
		if ((idx + 1) % 5 == 0)
			printf("\n");
	}
	printf("\n");
}
int fibo(int n) // 재귀적으로 구현하지 않는다 
{
	if (n < 2) return n;
		else {
		int i, tmp, cur = 1, last = 0;
			for (i = 2; i <= n; i++) {
				tmp = last;
				last = cur;
				cur += tmp;
		}
			return cur;
	}
		
}