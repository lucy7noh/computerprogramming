//20230791 ��ǻ�������� ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num[5];   // 5���� ������ ������ �迭
    int sum = 0;  // ������ ������ ����
    int aver;     // ����� ������ ����

    // �迭�� �� ��Ҹ� �Է¹��� 
    for (int i = 0; i < 5; i++) {
        printf("Enter %dth number: ", i + 1);  // ����ڿ��� 1���� 5������ ������ ������
        scanf("%d", &num[i]);
    }

    // �迭�� ������ ���
    for (int i = 0; i < 5; i++) {
        sum += num[i];
    }

    printf("------------------------------\n");
    printf("������ %d\n", sum);

    // ��� ���
    aver = sum / 5;
    printf("����� %d\n", aver);

    printf("------------------------------\n");

   
    for (int i = 0; i < 5; i++) {
        printf("array[%d]: %d\n", i, num[i]);
    }

    

    return 0;
}