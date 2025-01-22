//LABHW3_2 20230791 컴퓨터학전공 노윤선

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

	printf("최대값: 인덱스 = %d, 값 = %d\n", maxIndex, arr[maxIndex]);
	printf("최소값: 인덱스 = %d, 값 = %d\n", minIndex, arr[minIndex]);
}

int main(void) // 변경하지 말라
{
	int a[10];
	//srand(time(NULL)); 
	srand(100); // 실행결과가 맞나 보기 위해서 seed를 100으로 고정
	initArray(a, 10);
	printArray(a, 10);
	printMinMax(a, 10);

	return 0;
}