//LAB7_4 20230791 ��ǻ���а� ������
#include <stdio.h>
#include <stdlib.h>

void generateData();  // ���� ���� �Լ�
void printData();     // ������ ��� �Լ�
int totalData();      // �������� �� ��� �Լ�

int data[10];  // ���� �迭 ���� (ũ�� 10)

int main(void)
{
    srand(200);  // ���� ���� �õ� �� ����
    generateData();  // ���� ����
    printf("�߻��� 10���� ����:\n");
    printData();  // ���� ���
    printf("10�� ������ �� = %d\n", totalData());  // ������ �� ��� �� ���
    return 0;
}

// generateData �Լ��� data[0]..data[9]�� ������ �ִ´�.
void generateData()
{
    int k;
    int* p = data;  // data �迭�� ����Ű�� ������ p
    for (k = 0; k < 10; k++)
    {
        *p = rand() % 100;  // 0���� 99������ ������ �����Ͽ� p�� ����Ű�� ��ġ�� ����
        p++;  // �����͸� ���� �迭 ��ҷ� �̵�
    }
}

// printData �Լ��� data[0]..data[9]�� ���� ����Ѵ�.
void printData()
{
    int* pi = data;  // data �迭�� ����Ű�� ������ pi
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", *pi);  // pi�� ����Ű�� ���� ���
        pi++;  // �����͸� ���� �迭 ��ҷ� �̵�
    }
    printf("\n");  // �� �ٲ�
}

// totalData �Լ��� data[0]���� data[9]������ ���� ��� ���� �� ����� ��ȯ�Ѵ�.
int totalData()
{
    int* pi = data;  // data �迭�� ����Ű�� ������ pi
    int sum = 0;
    int i;
    for (i = 0; i < 10; i++)
    {
        sum += *pi;  // pi�� ����Ű�� ���� sum�� ����
        pi++;  // �����͸� ���� �迭 ��ҷ� �̵�
    }
    return sum;  // �հ� ��ȯ
}