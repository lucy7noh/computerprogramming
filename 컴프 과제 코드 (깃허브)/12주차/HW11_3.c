//challenge11_2 20230791 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
    char name[20];
    int midterm;
    int final;
    int average;
} Student;



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
    all = calculateAll2(&cp);
    printf("----------------------------------\n");
    printStudent(&all); // ������ ��� ���
    return 0;
}