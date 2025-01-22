//LAB5a_2 20230791 컴퓨터학과 노윤선

#include <stdio.h>
/*
void turnMatrix(int a[][4], int b[][4], int size)
{
    for (int i = 0; i < size; i++)
        for (int j = 0; j < 4; j++)
            b[i][j] = a[size - 1 - j][i];
}
*/

void turnMatrix(int a[][4], int b[][4], int size)
{
    int i, j;
    int temp[4][4];

    for (int i = 0; i < size; i++)
        for (int j = 0; j < 4; j++)
            temp[i][j] = a[i][j];
    //만약 왼쪽으로 90도 회전하는 코드를 작성한다했을때 여기까지는 동일 코드
    // 왼쪽으로 90도 회전한 값을 b에 저장
    /*for (int i = 0; i < size; i++)
        for (int j = 0; j < 4; j++)
            b[4 - 1 - j][i] = temp[i][j];
            */

    // 오른쪽으로 90도 회전한 값을 b에 저장
    for (i = 0; i < size; i++)
        for (int j = 0; j < 4; j++)
            b[j][4 - 1 - i] = temp[i][j];
}

    void printMatrix(int t[][4], int size)
    {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < 4; j++) {
                printf("%4d", t[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }


    /* void initMatrix(int a[][4], int size)
    {
        int num = 1;
        for (int i = 0; i < size; i++)
            for (int j = 0; j < 4; j++) {
                a[i][j] = num;
                num++;
            }
    }
    */
    //배열 초기화
    //2차원배열을 1부터 순서대로 숫자를 채우는 기능
    void initMatrix(int t[][4], int size)
    {
        int i, j;
        for (int i = 0; i < size; i++)
            for (int j = 0; j < 4; j++) {
                t[i][j] = i * 4 + (j + 1);
         
            }
    }


int main(void) {
    int A[4][4], B[4][4];

    initMatrix(A, 4);


    printMatrix(A, 4);
    turnMatrix(A, B, 4);
    printMatrix(B, 4);
    return 0;
}