//LAB4_2 20230791 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sum_rec(int);
void main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum_rec(n));
}

// ����Լ� �̿�
int sum_rec(int n)
{
	int result;
	printf("sum_rec(%d) ������\n", n);
	if (n == 1) {
		printf("sum_rec(%d) ����\n", n);
		return 1;
	}
	else {
		result = n + sum_rec(n - 1);
		printf("sum_rec(%d) ����\n", n);
		return result;
	}
}