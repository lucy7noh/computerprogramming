//LAb5a 20230791 컴퓨터학과 노윤선
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void readMatrix(int a[][3], int size) {
    int i, j;
    for (i = 0; i < size; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);

        }
        
    }
}
void matrixAdd(int a[][3], int b[][3], int c[][3], int size) {
    int i, j;
    for (i = 0; i < size; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}
void printMatrix(int a[][3], int size) {
    int i, j;
    for (i = 0; i < size; i++) {
        for (j = 0; j < 3; j++) {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


int main(void)
{
    int A[4][3];
    int B[4][3];
    int C[4][3];


    printf("(4 x 3) 행렬 A 입력:\n");
    readMatrix(A, 4);
    printf("(4 x 3) 행렬 B 입력:\n");
    readMatrix(B, 4);    
    printf("행렬합: \n");
    matrixAdd(A, B, C, 4);
    printMatrix(C, 4);



}