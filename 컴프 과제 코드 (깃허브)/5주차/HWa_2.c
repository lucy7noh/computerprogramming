//HWa_2 20230791 ��ǻ���а� ������
#include <stdio.h>
void turnMatrix(int a[][4], int b[][4], int size)
{
    int i, j;
    int temp[4][4];

    for (int i = 0; i < size; i++)
        for (int j = 0; j < 4; j++)
            temp[i][j] = a[i][j];

    // 90�� ȸ���� ���� b�� ����
    for (i = 0; i < size; i++)
        for (int j = 0; j < 4; j++)
            b[j][4 - 1 - i] = temp[i][j];
}

void printMatrix(int a[][4], int size)
{
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void initMatrix(int a[][4], int size)
{
    int num = 1;
    for (int i = 0; i < size; i++)
        for (int j = 0; j < 4; j++) {
            a[i][j] = num;
            num++;
        }
}

void copyMatrix(int a[][4], int b[][4], int size)
{
    for (int i = 0; i < size; i++)
        for (int j = 0; j < 4; j++)
            a[i][j] = b[i][j];
}
int main(void)
{
    int A[4][4], B[4][4];

    initMatrix(A, 4);
    printMatrix(A, 4);

    //4�� �ݺ��� > 90���� 4�� ������ �ڵ�
    for (int i = 0; i < 4; i++) {
        turnMatrix(A, B, 4);
        printMatrix(B, 4);
        copyMatrix(A, B, 4);
    }

}