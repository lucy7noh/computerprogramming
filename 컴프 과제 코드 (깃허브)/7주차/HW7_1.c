//HW7_1 20230791 ��ǻ���а� ������

#include <stdio.h>
#include <stdlib.h>
void generateData();
void printData();
int totalData();
int maxData();
int data[10]; // ��� ���࿡ ����� ���� ����
int main(void)
{
	srand(200);
	generateData();
	printf("�߻��� 10���� ����:\n");
	printData();
	printf("10�� ������ �� = %d \n", totalData());
	printf("10�� ������ ���� ū �� = %d \n", maxData());
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

// maxData �Լ��� data[0]���� data[9]������ �� �� ���� ū ���� ã�´�.
int maxData()
{
    int* pi = data;  // data �迭�� ����Ű�� ������ pi
    int max = *pi;  // ù ��° ���� max�� �ʱ�ȭ
    int i;
    for (i = 1; i < 10; i++)  // �� ��° ��Һ��� �� ����
    {
        pi++;  // �����͸� ���� �迭 ��ҷ� �̵�
        if (*pi > max)  // ���� ���� max���� ũ��
        {
            max = *pi;  // max�� ���� ������ ����
        }
    }
    return max;  // ���� ū �� ��ȯ
}