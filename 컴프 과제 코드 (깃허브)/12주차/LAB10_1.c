//LAB10_1 20230791 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct customer {
    char name[40];
    int age;
};

int main(void) {
    struct customer aCustomer; // ����ü ���� ����
    struct customer* cp;       // ����ü ������ ����

    // aCustomer�� �ּҸ� cp�� ����Ű���� ����
    cp = &aCustomer;

    // �Է� �ޱ�
    printf("Enter customer name: ");
    scanf("%s", cp->name); 
    printf("Enter age: ");
    scanf("%d", &cp->age); 
    // ���
    printf("\n�̸�\t����\n");


    return 0;
}