#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int searchKeyInArray(int a[], int size, int searchKey) {
    int i;
    for (i = 0; i < size; i++) {
        if (a[i] == searchKey) {
            return i; // 첫 번째로 찾은 위치를 반환
        }
    }
    return -1; // 값이 없으면 -1 반환
}

int main(void) {
    int size, searchKey, keyIndex;
    int num[100];

    printf("배열 크기 입력: ");
    scanf("%d", &size);

  

    printf("배열의 원소 입력:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &num[i]);
    }

    printf("찾을 값 입력: ");
    scanf("%d", &searchKey);

    keyIndex = searchKeyInArray(num, size, searchKey); // 찾기

    if (keyIndex == -1) {
        printf("값이 배열에 없습니다.\n");
    }
    else {
        printf("%d 번째에 값이 있습니다.\n", keyIndex + 1); // 1부터 시작하는 위치로 출력
    }

    return 0;
}