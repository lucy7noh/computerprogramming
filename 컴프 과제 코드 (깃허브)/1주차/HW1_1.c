//��ǻ�������� 20230791 ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
    int data[100];  
    int num, i;
    int count[10] = { 0 };

    srand(time(NULL));

    // ���� ���� �Է� ����
    printf("Enter the number of random numbers:<<= 100>: ");
    scanf("%d", &num);

    // num���� ������ �߻���Ŵ
    for (i = 0; i < num; i++) {
        data[i] = rand() % 10;  
        count[data[i]]++;
    }

    // 0���� 9������ ���� ���� ���

    for (i = 0; i < 10; i++) {
        printf("%d�� ������ %d\n", i, count[i]);
    }

    printf("-----------------------------------\n");

    // �߻��� �������� ���ٿ� 5���� ���
    printf("�߻��� ������\n");
    for (i = 0; i < num; i++) {
        printf("%d\t", data[i]);  
        if ((i + 1) % 5 == 0) {  
            printf("\n");
        }
    }

    

    return 0;
}