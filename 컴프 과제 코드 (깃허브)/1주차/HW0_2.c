//20230791 ��ǻ�������� ������ 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isSameArray(int a[], int b[], int aSize, int bSize) { // aSize, bSize�� ���� �迭 a, b�� ũ��) 

	if (aSize != bSize) {
		return 0;
	}
	for (int i = 0; i < aSize; i++) {
		if (a[i] != b[i]) {
			return 0;
		}
	}
	return 1;

}

int main() {
    int sizeA, sizeB;
    int i;
    int array1[100];
    int array2[100];


    printf("ù ��° �迭 ũ�� �Է�: ");
    scanf("%d", &sizeA);

  
    printf("ù ��° �迭 �Է�:\n");
    for (i = 0; i < sizeA; i++) {
        scanf("%d", &array1[i]);
    }

    printf("�� ��° �迭 ũ�� �Է�: ");
    scanf("%d", &sizeB);

    
    printf("�� ��° �迭 �Է�:\n");
    for (i = 0; i < sizeB; i++) {
        scanf("%d", &array2[i]);
    }

    if (isSameArray(array1, array2, sizeA, sizeB)) {
        printf("�� �迭�� �����ϴ�.\n");
    }
    else {
        printf("�� �迭�� �ٸ��ϴ�.\n");
    }

    return 0;
}