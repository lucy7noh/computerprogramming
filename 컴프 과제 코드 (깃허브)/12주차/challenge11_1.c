//challenge11_1 20230791 컴퓨터학과 노윤선
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
    char name[20];
    int midterm;
    int final;
    int average;
} Student;

typedef struct {
    int num;
    Student s[40];
} CClass;

// 입력 받기
void readClass(CClass* cp) {
    int i;
    for (i = 0; i < cp->num; i++) {
        printf("Enter student name: ");
        scanf("%s", cp->s[i].name);
        printf("Enter midterm and final score: ");
        scanf("%d %d", &cp->s[i].midterm, &cp->s[i].final);
    }
}

// 전체 평균 계산
void calculateAll(CClass* cp, Student* pAll) {
    int sumMidterm = 0, sumFinal = 0;
    int sumAverage = 0, i;

    for (i = 0; i < cp->num; i++) {
        sumMidterm += cp->s[i].midterm; // 모든 학생의 중간고사 점수 합
        sumFinal += cp->s[i].final;    // 모든 학생의 기말고사 점수 합
        sumAverage += cp->s[i].average; // 모든 학생의 평균 점수 합
    }

    // 평균 계산 후 pAll에 저장
    pAll->midterm = sumMidterm / cp->num;
    pAll->final = sumFinal / cp->num;
    pAll->average = sumAverage / cp->num;
}

// 학생별 점수 출력
void printClass(CClass* cp) {
    int i;
    for (i = 0; i < cp->num; i++) {
        printf("%s\t", cp->s[i].name);
        printf("%d\t%d\t%d\n", cp->s[i].midterm, cp->s[i].final, cp->s[i].average);
    }
}

// 각 학생의 평균 계산
void calculateClassAverage(CClass* cp) {
    int i;
    for (i = 0; i < cp->num; i++) {
        cp->s[i].average = (cp->s[i].midterm + cp->s[i].final) / 2;
    }
}

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
    calculateAll(&cp, &all);
    printf("----------------------------------\n");
    printStudent(&all); // 각각의 평균 출력
    return 0;
}