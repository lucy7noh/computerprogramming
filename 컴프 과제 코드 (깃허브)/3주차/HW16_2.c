//HW16_2 20230791 컴퓨터학과 노윤선

#include <stdio.h> 
int main(void)
{
	int arr1[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int arr2[4][2];
	int arr3[8];
	int i, j; // 더 이상의 인덱스 변수는 사용 말라. 

	printf("--배열 A\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++) {
			printf("%5d", arr1[i][j]);
		}
		printf("\n");
	}

	/* 이동(복사) A  B*/
	printf("--배열 B\n");
	for (j = 0; j < 4; j++) {
		for (i = 0; i < 2; i++) {
			arr2[j][i] = arr1[i][j];
			printf("%5d", arr2[j][i]);

		}
		printf("\n");

	}


	/* 이동(복사) A  C*/
	printf("--배열 C\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++) {
			arr3[i * j] = arr1[i][j];
			printf("%d ", arr3[i * j]);
		}
	}
	printf("\n");


	/* A, B, C 출력 */


	return 0;
}