//LAB11_2_1 20230791 ��ǻ���а� ������
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

void readStudentScore(Student *p, int size) {
         int i;
         for (i = 0; i < size; i++) {

        printf("Enter student name: "); //a)
        scanf("%s", p->name); //b)
        printf("Enter midterm and final score: "); //c)
        scanf("%d %d", &p->midterm, &p->final); //d)
        p++;

    }

}

int calculateStudentAverage(Student* p, int size) {
    int i;
    for (i = 0; i < size; i++) {
        p->average = ((p->midterm + p->final) / 2);
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
    readStudentScore(s, num);
    

    // ��� ���� ���
    calculateStudentAverage(s, num);

    // �л� ���� ���
    printf("\n�̸�\t�߰�\t�б⸻\t���\n");
    printStudentArray(s, num); // �迭 ��� �Լ� ȣ��

    return 0;
}