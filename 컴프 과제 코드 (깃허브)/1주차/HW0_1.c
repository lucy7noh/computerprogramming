//20230791 ��ǻ�������� ������ 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPrime(int n) {
	int i;
	if (n < 2) {
		return 0;
	}
	for (i = 2; i < n; i++) {
		if (n % i == 0) {
			return 0;
		}

	}
	return 1;

}

int main() {
	int num;

	printf("���� �Է�: ");
	scanf("%d", &num);

	if (isPrime(num)) {
		printf("�Ҽ��̴�.");
	}
	else {
		printf("�Ҽ��� �ƴϴ�.");
	}





	return 0;
}