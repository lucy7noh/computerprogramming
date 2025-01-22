//20230791 컴퓨터학전공 노윤선 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isSameArray(int a[], int b[], int aSize, int bSize) { // aSize, bSize는 각각 배열 a, b의 크기) 

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


    printf("첫 번째 배열 크기 입력: ");
    scanf("%d", &sizeA);

  
    printf("첫 번째 배열 입력:\n");
    for (i = 0; i < sizeA; i++) {
        scanf("%d", &array1[i]);
    }

    printf("두 번째 배열 크기 입력: ");
    scanf("%d", &sizeB);

    
    printf("두 번째 배열 입력:\n");
    for (i = 0; i < sizeB; i++) {
        scanf("%d", &array2[i]);
    }

    if (isSameArray(array1, array2, sizeA, sizeB)) {
        printf("두 배열은 같습니다.\n");
    }
    else {
        printf("두 배열은 다릅니다.\n");
    }

    return 0;
}