//LAB8_2 20230791 컴퓨터학과 노윤선 
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
	printf("arr의 합은 %d\n", sumUp(arr, 5));


}