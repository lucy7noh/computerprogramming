//HW4_2 20230791 ��ǻ���а� ������

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int fibo(int n);
int main(void)
{
	int n, idx;
	printf("��� �Ǻ���ġ �������� ����ұ��?(3���� ū ����):");
	scanf("%d", &n);
	for (idx = 0; idx < n; idx++)
	{
		printf("%d ", fibo(idx));
		if ((idx + 1) % 5 == 0)
			printf("\n");
	}
	printf("\n");
}
int fibo(int n) // ��������� �������� �ʴ´� 
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