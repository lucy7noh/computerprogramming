//��ǻ�������� 20230791 ������

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

	printf("�迭 ũ�� �Է�: ");
	scanf("%d", &size);

	int num[100]; // �ִ� 100���� �迭�� ���� �� �ְ� ����

	printf("�迭�� ���� �Է�: ");
	for (int i = 0; i < size; i++) {
		scanf("%d", &num[i]);
	}

	// �迭 ������
	reverse(num, size);

	// ������ �迭 ���
	printf("������ �迭: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", num[i]);
	}
	printf("\n");

	return 0;
}