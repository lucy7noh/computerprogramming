//LABHW3_3_1 20230791 ��ǻ�������� ������ 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int printSet(int list[], int size) {
	printf("{ ");
	for (int i = 0; i < size; i++) {
		printf("%d ", list[i]);
		if (i < size - 1) { // ������ ���Ұ� �ƴ� �� ��ǥ �߰�
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
		printf("�������տ� �߰��� ����: ");
	    scanf("%d", &num);

		list[i] = num;
		printSet(list, i + 1);
		
	}
	
	return 0;
}