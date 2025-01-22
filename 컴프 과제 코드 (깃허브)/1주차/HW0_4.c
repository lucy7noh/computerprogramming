//컴퓨터학전공 20230791 노윤선

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void reverse(int a[], int size) {
	int i, temp;
	for (i = 0; i < size / 2; i++) {
	
		temp = a[i];
		a[i] = a[size - i - 1];
		a[size - i - 1] = temp;
	}
}

int main(void) {
	int size;

	printf("배열 크기 입력: ");
	scanf("%d", &size);

	int num[100]; // 최대 100개의 배열을 받을 수 있게 설정

	printf("배열의 원소 입력: ");
	for (int i = 0; i < size; i++) {
		scanf("%d", &num[i]);
	}

	// 배열 뒤집기
	reverse(num, size);

	// 뒤집은 배열 출력
	printf("뒤집은 배열: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", num[i]);
	}
	printf("\n");

	return 0;
}