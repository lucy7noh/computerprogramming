//LAB16_1 20230791 ��ǻ�������� ������

#include <stdio.h>

int main() {
	int table[5][3] = {0};
	int i = 0, j = 0;
	int sum = 0;

	printf("��>\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", table[i][j]);
		}
		printf("\n");
	}


	printf("��>\n");
	i = 0;
	while (i < 5) {
		j = 0;
		while (j < 3) {
			table[i][j] = i + j;
			printf("%d ", table[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	
	
	printf("��>\n");
	i = 0; sum = 0;
	while (i < 5) {
		j = 0;
		while (j < 3) {
			sum += table[i][j];
			j++;
		}
		i++;
	}
	printf("Total is %d\n", sum);
	return 0;

}