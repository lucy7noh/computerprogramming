//LAB10_0_3 20230791 컴퓨터학과 노윤선
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student {
    char name[20];
    int midterm;
    int final;
};

int main(void) {
    struct student s[3];
    struct student* sp = s; // struct student *sp = s[0];

    int i;

    // 입력
    for (i = 0; i < 3; i++) {
        printf("Enter student name: ");
        scanf("%s", (*sp).name); // 현재 포인터가 가리키는 구조체의 이름 입력
        printf("Enter midterm and final score: ");
        scanf("%d %d", &(*sp).midterm, &(*sp).final); // 현재 포인터가 가리키는 점수 입력
        sp++; // 다음 구조체로 포인터 이동
    }

    // 포인터 초기화
    sp = s;

    // 출력
    printf("\n이름\t중간\t학기말\n");
    for (i = 0; i < 3; i++) {
        printf("%s\t%d\t%d\n", (*sp).name, (*sp).midterm, (*sp).final); // 현재 포인터가 가리키는 데이터 출력
        sp++; // 다음 구조체로 포인터 이동
    }

    return 0;
}
/*
2)
    // 입력
    for (i = 0; i < 3; i++) {
        printf("Enter student name: ");
        scanf("%s", sp[i].name); // 구조체 배열의 각 요소에 접근하여 이름 입력
        printf("Enter midterm and final score: ");
        scanf("%d %d", &sp[i].midterm, &sp[i].final); // 구조체 배열의 각 요소에 점수 입력
    }

    // 출력
    printf("\n이름\t중간\t학기말\n");
    for (i = 0; i < 3; i++) {
        printf("%s\t%d\t%d\n", sp[i].name, sp[i].midterm, sp[i].final); // 구조체 배열 요소 출력
    }
    ------------------------------------------

3. 포인터 이동 없이 포인터 연산을 활용
for (i = 0; i < 3; i++) {
    printf("Enter student name: ");
    scanf("%s", (*(s + i)).name); // 포인터 연산으로 구조체 필드 접근
    printf("Enter midterm and final score: ");
    scanf("%d %d", &(*(s + i)).midterm, &(*(s + i)).final);
}

printf("\n이름\t중간\t학기말\n");
for (i = 0; i < 3; i++) {
    printf("%s\t%d\t%d\n", (*(s + i)).name, (*(s + i)).midterm, (*(s + i)).final); // 포인터 연산으로 출력
}
*/

