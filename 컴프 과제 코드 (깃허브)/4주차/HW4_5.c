//HW4_5_1 20230791 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int get_cycle_number(int n) {
	int count = 1; 
	printf("%d ", n); 

	while (n > 1) {
		if (n % 2 == 0) {
			n = n / 2;
		}
		else {
			n = n * 3 + 1;
		}
		printf("%d ", n);  
		count++;
	}
	return count;  
}

int main(void)
{
	int num;
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%d", &num);  
	int cycle = get_cycle_number(num);  

	printf("\n����Ŭ ����: %d\n", cycle);

	return 0;
}