//20230791 컴퓨터학전공 노윤선 
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

	printf("숫자 입력: ");
	scanf("%d", &num);

	if (isPrime(num)) {
		printf("소수이다.");
	}
	else {
		printf("소수가 아니다.");
	}





	return 0;
}