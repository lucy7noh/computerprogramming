//LAB8_2 20230791 ��ǻ���а� ������ 
#include <stdio.h>
/*
int sumUp(int pa[], int size)
{
	int i, sum = 0;
	for (i = 0; i < size; i++)
		sum += pa[i];
	return sum;
}
*/
/*
int sumUp(int* pa, int size)
{
	int i, sum = 0;
	for (i = 0; i < size; i++)
		sum += *(pa + i);
	return sum;
}
*/

int sumUp(int* pa, int size) {
	int i, sum = 0;
	for (i = 0; i < size; i++)
		sum += *pa++;
	return sum;
}


int main(void) {
	int arr[5] = { 10, 20, 30, 40, 50 };
	printf("arr�� ���� %d\n", sumUp(arr, 5));


}