#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int searchKeyInArray(int a[], int size, int searchKey) {
    int i;
    for (i = 0; i < size; i++) {
        if (a[i] == searchKey) {
            return i; // ù ��°�� ã�� ��ġ�� ��ȯ
        }
    }
    return -1; // ���� ������ -1 ��ȯ
}

int main(void) {
    int size, searchKey, keyIndex;
    int num[100];

    printf("�迭 ũ�� �Է�: ");
    scanf("%d", &size);

  

    printf("�迭�� ���� �Է�:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &num[i]);
    }

    printf("ã�� �� �Է�: ");
    scanf("%d", &searchKey);

    keyIndex = searchKeyInArray(num, size, searchKey); // ã��

    if (keyIndex == -1) {
        printf("���� �迭�� �����ϴ�.\n");
    }
    else {
        printf("%d ��°�� ���� �ֽ��ϴ�.\n", keyIndex + 1); // 1���� �����ϴ� ��ġ�� ���
    }

    return 0;
}