//LAB16_4 20230791 컴퓨터학전공 노윤선

#include <stdio.h>

int main() {
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };
	int i, j;
	int sum = 0;
	double aver;
	int max;
	int maxTotal = 0;
	
	printf("배열 test의 엘리먼트를 출력합니다.\n");
	for (i = 0; i < 4; i++)
	{
		printf("\n%d번째 row: ", i + 1);
		for (j = 0; j < 3; j++)
			printf("%5d", test[i][j]);
	}
	printf("\n");

	printf("다>\n");
	printf("배열 test의 엘리먼트를 출력합니다.\n");

	for (i = 0; i < 4; i++)
	{
		test[i][2] = -1;
	}
	for (i = 0; i < 4; i++)
	{
		printf("\n%d번째 row: ", i + 1);
		for (j = 0; j < 3; j++)
			printf("%5d", test[i][j]);
	}
	
	printf("\n");

	printf("라>\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++) {
			sum += test[i][j];
			aver = sum / 12.0;
		}
	}
	printf("Total is %d\n", sum);
	printf("Average is %.2f\n", aver);

	printf("\n");

	printf("마>\n");


	for (i = 0; i < 4; i++){
	max = test[i][0];
	for (j = 0; j < 3; j++) {
			if (test[i][j] > max) {
				max = test[i][j];
			}
		}
	    maxTotal += max;
		printf("%d번째 row에서의 최대값: %d\n", i + 1, max);
	}
	printf("최대값의 합: %d", maxTotal);
	
	return 0;
	  
}