//LABHW3_2 20230791 ��ǻ�������� ������

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void initArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		arr[i] = rand() % 100;
	return;
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void printMinMax(int arr[], int size)
{
	int minIndex = 0;
	int maxIndex = 0;

	for (int i = 1; i < size; i++) {
		if (arr[i] > arr[maxIndex])
			maxIndex = i;
		if (arr[i] < arr[minIndex])
			minIndex = i;
	}

	printf("�ִ밪: �ε��� = %d, �� = %d\n", maxIndex, arr[maxIndex]);
	printf("�ּҰ�: �ε��� = %d, �� = %d\n", minIndex, arr[minIndex]);
}

int main(void) // �������� ����
{
	int a[10];
	//srand(time(NULL)); 
	srand(100); // �������� �³� ���� ���ؼ� seed�� 100���� ����
	initArray(a, 10);
	printArray(a, 10);
	printMinMax(a, 10);

	return 0;
}