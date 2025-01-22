#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int data[100];  // �ִ� 100���� ������ ������ �迭
    int num, i;
    int max;  // �ִ밪�� ������ ����
    srand(time(NULL));  // ������ ������ �ٸ� ������ �߻���Ű���� ����

    // ���� ���� �Է� ����
    printf("Enter the number of random numbers (<= 50): ");
    scanf("%d", &num);

    // num���� ������ �߻���Ŵ
    for (i = 0; i < num; i++) {
        data[i] = rand() % 100;  // 0���� 99 ������ ���� �߻�
    }

    // �߻��� ���� �� ���� ū ���� ã��
    max = data[0];  // ù ��° ���� �ִ밪���� ����
    for (i = 1; i < num; i++) {
        if (data[i] > max) {
            max = data[i];
        }
    }
    // ���� ū �� ���
    printf("\n�ִ밪�� %d\n", max);




    printf("�߻��� ������\n");
    for (i = 0; i < num; i++) {
        printf("%5d\t", data[i]);
        if ((i + 1) % 5 == 0) {
            printf("\n");
        }
    }

    return 0;
}