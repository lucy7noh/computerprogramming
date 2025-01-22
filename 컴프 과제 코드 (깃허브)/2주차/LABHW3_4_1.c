//LABHW3_3_1 20230791 컴퓨터학전공 노윤선 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int printSet(int list[], int size) {
	printf("{ ");
	for (int i = 0; i < size; i++) {
		printf("%d ", list[i]);
		if (i < size - 1) { // 마지막 원소가 아닐 때 쉼표 추가
			printf(", ");
		}
	}
	printf(" }\n");

}

int main() {
	int list[5];
	int num;
	int i;


	for(i = 0; i < 5; i++) {
		printf("다중집합에 추가할 원소: ");
	    scanf("%d", &num);

		list[i] = num;
		printSet(list, i + 1);
		
	}
	
	return 0;
}