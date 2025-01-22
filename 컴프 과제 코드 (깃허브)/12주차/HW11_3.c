//challenge11_2 20230791 컴퓨터학과 노윤선
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
    char name[20];
    int midterm;
    int final;
    int average;
} Student;



// 특정 학생 정보 출력
void printStudent(Student* sp) {
    printf("%s\t%d\t%d\t%d\n", sp->name, sp->midterm, sp->final, sp->average);
}

int main(void) {
    CClass cp;
    Student all = { "All", 0, 0, 0 };

    printf("Enter a number of student:");
    scanf("%d", &cp.num); // 학생 수 입력
    readClass(&cp);
    calculateClassAverage(&cp);
    printf("\n 이름\t 중간\t 학기말\t 평균\n");
    printClass(&cp);
    all = calculateAll2(&cp);
    printf("----------------------------------\n");
    printStudent(&all); // 각각의 평균 출력
    return 0;
}