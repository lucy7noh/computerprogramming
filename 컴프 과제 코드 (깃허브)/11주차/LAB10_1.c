//LAB10_1 20230791 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
struct customer {
    char name[40];
    int age;
};
#include <stdio.h>
#include <string.h>
int main(void)
{
    // ���� ���� �κ�
    struct customer aCustomer = { "�ڼ���", 36 };
    
    printf("�̸�: %s\n", aCustomer.name);
    printf("����: %d\n", aCustomer.age);

    struct customer cArray[2] = { {"�嵿��", 38}, {"��ҿ�", 38} };
    int i;

    for (i = 0; i < 2; i++) {
        printf("Name = %s, Age = %d\n", cArray[i].name, cArray[i].age);
    }
  

    return 0;
}