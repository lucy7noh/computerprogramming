//LAB10_0_3 20230791 ��ǻ���а� ������
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

    // �Է�
    for (i = 0; i < 3; i++) {
        printf("Enter student name: ");
        scanf("%s", (*sp).name); // ���� �����Ͱ� ����Ű�� ����ü�� �̸� �Է�
        printf("Enter midterm and final score: ");
        scanf("%d %d", &(*sp).midterm, &(*sp).final); // ���� �����Ͱ� ����Ű�� ���� �Է�
        sp++; // ���� ����ü�� ������ �̵�
    }

    // ������ �ʱ�ȭ
    sp = s;

    // ���
    printf("\n�̸�\t�߰�\t�б⸻\n");
    for (i = 0; i < 3; i++) {
        printf("%s\t%d\t%d\n", (*sp).name, (*sp).midterm, (*sp).final); // ���� �����Ͱ� ����Ű�� ������ ���
        sp++; // ���� ����ü�� ������ �̵�
    }

    return 0;
}
/*
2)
    // �Է�
    for (i = 0; i < 3; i++) {
        printf("Enter student name: ");
        scanf("%s", sp[i].name); // ����ü �迭�� �� ��ҿ� �����Ͽ� �̸� �Է�
        printf("Enter midterm and final score: ");
        scanf("%d %d", &sp[i].midterm, &sp[i].final); // ����ü �迭�� �� ��ҿ� ���� �Է�
    }

    // ���
    printf("\n�̸�\t�߰�\t�б⸻\n");
    for (i = 0; i < 3; i++) {
        printf("%s\t%d\t%d\n", sp[i].name, sp[i].midterm, sp[i].final); // ����ü �迭 ��� ���
    }
    ------------------------------------------

3. ������ �̵� ���� ������ ������ Ȱ��
for (i = 0; i < 3; i++) {
    printf("Enter student name: ");
    scanf("%s", (*(s + i)).name); // ������ �������� ����ü �ʵ� ����
    printf("Enter midterm and final score: ");
    scanf("%d %d", &(*(s + i)).midterm, &(*(s + i)).final);
}

printf("\n�̸�\t�߰�\t�б⸻\n");
for (i = 0; i < 3; i++) {
    printf("%s\t%d\t%d\n", (*(s + i)).name, (*(s + i)).midterm, (*(s + i)).final); // ������ �������� ���
}
*/

