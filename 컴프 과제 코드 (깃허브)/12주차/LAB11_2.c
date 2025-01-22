//20230791 컴퓨터학과 노윤선
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
    char name[20];
    int midterm;
    int final;
    int average;
} Student;

// 학생 정보 출력 함수 (구조체를 값으로 전달)
void printStudent1(Student aStudent) {
    printf("%s\t%d\t%d\t%d\n", aStudent.name, aStudent.midterm, aStudent.final, aStudent.average);
}

// 학생 정보 출력 함수 (포인터로 전달)
void printStudent2(Student* p) {
    printf("%s\t%d\t%d\t%d\n", p->name, p->midterm, p->final, p->average);
}

// 학생 배열 출력 함수
void printStudentArray(Student* p, int size) {
    for (int i = 0; i < size; i++) {
        //printf("%s\t%d\t%d\t%d\n", p[i].name, p[i].midterm, p[i].final, p[i].average);
        printf("%s\t%d\t%d\t%d\n", p->name, p->midterm, p->final, p->average);
        p++;
    }
}

int main(void) {
    Student s[40];
    int num, i;

    // 학생 수 입력
    printf("Enter a number of students: ");
    scanf("%d", &num);

    // 학생 정보 입력
    for (i = 0; i < num; i++) {
        printf("Enter student name: ");
        scanf("%s", s[i].name);
        printf("Enter midterm and final score: ");
        scanf("%d %d", &s[i].midterm, &s[i].final);
    }

    // 평균 점수 계산
    for (i = 0; i < num; i++) {
        s[i].average = (s[i].midterm + s[i].final) / 2;
    }

    // 학생 정보 출력
    printf("\n이름\t중간\t학기말\t평균\n");
    printStudentArray(s, num); // 배열 출력 함수 호출

    return 0;
}