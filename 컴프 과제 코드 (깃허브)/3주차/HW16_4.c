//HW16_4 20230791 ��ǻ�������� ������

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//������ �迭�� ����
void initTable(int table[][5], int rows) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < 5; j++) {
            table[i][j] = rand() % 100; // 0���� 99 ������ ���� �߻�
        }
    }
}

//���� ����Ͽ� ��ȯ
int totalTable(int table[][5], int rows) {
    int i, j;
    int sum = 0;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < 5; j++) {
            sum += table[i][j];
        }
    }

    return sum;
}

//�迭�� ���� ���
void printTable(int table[][5], int rows) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < 5; j++) {
            printf("%4d", table[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    int table[3][5];
    int i, j;
    int total = 0;

    srand(time(NULL));


    initTable(table, 3);
    printf("�߻��� ������ ����� %d�Դϴ�\n", totalTable(table, 3) / 15);

    printTable(table, 3); // ȣ�� 

    printf("----�� ���� ��----\n");

    for (j = 0; j < 5; j++) {
        for (i = 0; i < 3; i++) {
            total += table[i][j];
           
        }
        printf("%4d", total);
    
    }
    return 0;
}