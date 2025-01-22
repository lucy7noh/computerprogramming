//LABHW3_3_1 20230791 컴퓨터학전공 노윤선 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int printSet(int list[], int size) {
    printf("{ ");
    for (int i = 0; i < size; i++) {
        printf("%d", list[i]);
        if (i < size - 1) { // 마지막 원소가 아닐 때 쉼표 추가
            printf(", ");
        }
    }
    printf(" }\n");
}

int main() {
    int list[5];
    int num;
    int i;

    for (i = 0; i < 5;) { // i를 증가시키지 않음
        printf("다중집합에 추가할 원소: ");
        scanf("%d", &num);

        // 중복 체크
        int check = 0;
        for (int j = 0; j < i; j++) {
            if (list[j] == num) {
                check = 1; // 중복된 원소가 있음
                break;
            }
        }

        if (check == 0) {
            list[i] = num; // 중복이 아닌 경우 추가
            i++; // 원소 개수 증가
            printSet(list, i);
        }
        else {
            printf("%d는 이미 집합에 있습니다.\n", num);
        }
    }

    return 0;
}