//HW(����ã��) 20230791 ��ǻ���а� ������

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define X_VALUE 5 //2���� �迭�� ���� �� 
#define Y_VALUE 5 //2���� �迭�� ���� �� 

void readBombInfo(char grid[][Y_VALUE + 1])
{
    int i;
    // grid �� ���� ���� �Է� 
    printf("Input Grid\n");
    for (i = 0; i < X_VALUE; i++)
        scanf("%s", grid[i]); // ������ ���ִ°�? ���ڿ� �������� ����! 
}
void countBomb(char grid[][Y_VALUE + 1], int numOfBombs[][Y_VALUE])
{
    int i, j;
    int k, t;

    // ��� ĭ�� ��ȸ�ϸ� �ֺ� ���� ���� ���
    for (i = 0; i < X_VALUE; i++) {
        for (j = 0; j < Y_VALUE; j++) {
            // ���ڰ� �ִ� ĭ�� �Ѿ
            if (grid[i][j] == '*') {
                continue;
            }
            // �ֺ� 8ĭ�� ���캽
            for (k = -1; k <= 1; k++) {
                for (t = -1; t <= 1; t++) {
                    // �迭 ������ ����� �ʵ��� üũ
                    if (i + k >= 0 && i + k < X_VALUE && j + t >= 0 && j + t < Y_VALUE) {
                        if (grid[i + k][j + t] == '*') {
                            numOfBombs[i][j]++; // ���ڰ� ������ ī��Ʈ ����
                        }
                    }
                }
            }
        }
    }
}

void display_numOfBombs(char grid[][Y_VALUE + 1], int numOfBombs[][Y_VALUE])
{
    int i, j;
    for (i = 0; i < X_VALUE; i++) {
        for (j = 0; j < Y_VALUE; j++)
            if (grid[i][j] == '*')
                printf("*");
            else
                printf("%d", numOfBombs[i][j]);
        printf("\n");
    }
}

int main(void)
{
    char grid[X_VALUE][Y_VALUE + 1]; //���ڿ��� ��� �������� NULL�� ���� �ϹǷ�  
    // 5X5 �迭�� �ƴ� 5X6 �迭�� �Ǿ�� �Ѵ�.  
    int numOfBombs[X_VALUE][Y_VALUE] = { 0 }; //������ ������ �ִ� ������ 5X5 �迭 

    readBombInfo(grid);
    countBomb(grid, numOfBombs);
    display_numOfBombs(grid, numOfBombs);
}