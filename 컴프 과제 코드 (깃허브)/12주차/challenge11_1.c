//challenge11_1 20230791 ��ǻ���а� ������
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

// �Է� �ޱ�
void readClass(CClass* cp) {
    int i;
    for (i = 0; i < cp->num; i++) {
        printf("Enter student name: ");
        scanf("%s", cp->s[i].name);
        printf("Enter midterm and final score: ");
        scanf("%d %d", &cp->s[i].midterm, &cp->s[i].final);
    }
}

// ��ü ��� ���
void calculateAll(CClass* cp, Student* pAll) {
    int sumMidterm = 0, sumFinal = 0;
    int sumAverage = 0, i;

    for (i = 0; i < cp->num; i++) {
        sumMidterm += cp->s[i].midterm; // ��� �л��� �߰���� ���� ��
        sumFinal += cp->s[i].final;    // ��� �л��� �⸻��� ���� ��
        sumAverage += cp->s[i].average; // ��� �л��� ��� ���� ��
    }

    // ��� ��� �� pAll�� ����
    pAll->midterm = sumMidterm / cp->num;
    pAll->final = sumFinal / cp->num;
    pAll->average = sumAverage / cp->num;
}

// �л��� ���� ���
void printClass(CClass* cp) {
    int i;
    for (i = 0; i < cp->num; i++) {
        printf("%s\t", cp->s[i].name);
        printf("%d\t%d\t%d\n", cp->s[i].midterm, cp->s[i].final, cp->s[i].average);
    }
}

// �� �л��� ��� ���
void calculateClassAverage(CClass* cp) {
    int i;
    for (i = 0; i < cp->num; i++) {
        cp->s[i].average = (cp->s[i].midterm + cp->s[i].final) / 2;
    }
}

// Ư�� �л� ���� ���
void printStudent(Student* sp) {
    printf("%s\t%d\t%d\t%d\n", sp->name, sp->midterm, sp->final, sp->average);
}

int main(void) {
    CClass cp;
    Student all = { "All", 0, 0, 0 };

    printf("Enter a number of student:");
    scanf("%d", &cp.num); // �л� �� �Է�
    readClass(&cp);
    calculateClassAverage(&cp);
    printf("\n �̸�\t �߰�\t �б⸻\t ���\n");
    printClass(&cp);
    calculateAll(&cp, &all);
    printf("----------------------------------\n");
    printStudent(&all); // ������ ��� ���
    return 0;
}