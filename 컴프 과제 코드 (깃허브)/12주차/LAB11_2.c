//20230791 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
    char name[20];
    int midterm;
    int final;
    int average;
} Student;

// �л� ���� ��� �Լ� (����ü�� ������ ����)
void printStudent1(Student aStudent) {
    printf("%s\t%d\t%d\t%d\n", aStudent.name, aStudent.midterm, aStudent.final, aStudent.average);
}

// �л� ���� ��� �Լ� (�����ͷ� ����)
void printStudent2(Student* p) {
    printf("%s\t%d\t%d\t%d\n", p->name, p->midterm, p->final, p->average);
}

// �л� �迭 ��� �Լ�
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

    // �л� �� �Է�
    printf("Enter a number of students: ");
    scanf("%d", &num);

    // �л� ���� �Է�
    for (i = 0; i < num; i++) {
        printf("Enter student name: ");
        scanf("%s", s[i].name);
        printf("Enter midterm and final score: ");
        scanf("%d %d", &s[i].midterm, &s[i].final);
    }

    // ��� ���� ���
    for (i = 0; i < num; i++) {
        s[i].average = (s[i].midterm + s[i].final) / 2;
    }

    // �л� ���� ���
    printf("\n�̸�\t�߰�\t�б⸻\t���\n");
    printStudentArray(s, num); // �迭 ��� �Լ� ȣ��

    return 0;
}