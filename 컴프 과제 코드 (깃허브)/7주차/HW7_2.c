//HW7_2 20230791 ��ǻ���а� ����
#include <stdio.h>
#include <stdlib.h>

void generateData();  // ���� ���� �Լ�
void printData();     // ������ ��� �Լ�
int totalData();      // �������� �� ��� �Լ�

static int data[3][10];  // ��� ���࿡ ����� ���� ����

void main()
{
    srand(200);  // random �� ��¿� ����ϴ� �Լ�. Seed ���� �ο�
    generateData();  // ���� ����
    printData();     // ���� ���
    printf("��ü�� ����: %d\n", totalData());  // ������ �� ��� �� ���
}

// generateData �Լ��� 0~99 ������ ������ data �迭�� �����Ѵ�.
void generateData()
{
    int* p = &data[0][0];  // 2���� �迭�� ù ��° ��Ҹ� ����Ű�� ������
    int i;
    for (i = 0; i < 30; i++) {
        *p = rand() % 100;  // 0���� 99������ ������ �����Ͽ� p�� ����Ű�� ��ġ�� ����
        p++;  // �����͸� ���� �迭 ��ҷ� �̵�
    }
}

// printData �Լ��� 2���� �迭�� ���� ����Ѵ�.
void printData()
{
    int i, j;
    int* p = &data[0][0];  // 2���� �迭�� ù ��° ��Ҹ� ����Ű�� ������
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++) {
            printf("%d ", *p);  // �����Ͱ� ����Ű�� ���� ���
            p++;  // �����͸� ���� �迭 ��ҷ� �̵�
        }
        printf("\n");  // �� �ٲ�
    }
}

// totalData �Լ��� 2���� �迭�� ��� ���� ���� ����� ��ȯ�Ѵ�.
int totalData()
{
    int* p = &data[0][0];  // 2���� �迭�� ù ��° ��Ҹ� ����Ű�� ������
    int i, total = 0;
    for (i = 0; i < 30; i++) {
        total += *p;  // �����Ͱ� ����Ű�� ���� total�� ����
        p++;  // �����͸� ���� �迭 ��ҷ� �̵�
    }
    return total;  // �հ� ��ȯ
}