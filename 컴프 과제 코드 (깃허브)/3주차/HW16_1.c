//HW16_1 20230791 ��ǻ�������� ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int table[8][9];
	int i, j;
	int num;

	printf("--������ ǥ�� ������ �����ϴ�.\n");
	
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 9; j++) {
			table[i][j] = (i + 2) * (j + 1);
			printf("%5d", table[i][j]);
		}
		printf("\n");
	}

	printf("--���ϴ� ��������? ");
	scanf("%d", &num);

	for (j = 0; j < 9; j++) {
		table[num][j] = num * (j + 1);
		printf("%5d", table[num][j]);
	}
	




	return 0;
}