//HW11_1 20230791 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct student {
    char name[20];
    int midterm;
    int final;
    int average;
    char grade;
};

int main(void)
{
    struct student s[3];
    struct student* sp = s; //�迭�� ù��° ����Ŵ(s[0])

    int i = 0;
    int midterm_sum = 0, final_sum = 0;


    for (i = 0; i < 3; i++) {
        printf("Enter student name: ");
        scanf("%s", sp -> name);
        printf("Enter midterm and final score: ");
        scanf("%d %d", &sp->midterm, &sp->final);
        sp++;

    }
    printf("\n�̸�\t�߰�\t�б⸻\t���\n");
    sp = s;// �����͸� �迭�� ù ��° ���ҷ� �ٽ� ����
    for (i = 0; i < 3; i++) {
        sp->average = ((sp->midterm + sp->final) / 2);
        midterm_sum += sp->midterm;
        final_sum += sp->final;
        printf("%s\t%d\t%d\t%d\n", sp->name, sp->midterm, sp->final, sp->average);
        sp++;
    }
    sp = s;// �����͸� �迭�� ù ��° ���ҷ� �ٽ� ����
    printf("\n�̸�\t����\n");
    for (i = 0; i < 3; i++) {
        if (sp->average >= 80)
            sp->grade = 'A';
        else if (sp->average >= 50)
            sp->grade = 'B';
        else
            sp->grade = 'F';
        printf("%s\t%c\n", sp->name, sp->grade);
        sp++;  // ���� �л����� �̵�
    }

    printf("\n�߰������ ��� = %d\n", midterm_sum / 3);
    printf("�б⸻����� ��� = %d\n", final_sum / 3);
    
    return 0;
}