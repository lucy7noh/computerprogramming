//HW5a 20230791 컴퓨터학과 노윤선
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void readMatrix(int a[][2], int size) {
    int i, j;
    for (i = 0; i < size; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);

        }

    }
}
void readMatrix2(int b[][3], int size) {
    int i, j;
    for (i = 0; i < size; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);

        }

    }
}

void printMatrix(int c[][3], int size) {
    int i, j;
    for (i = 0; i < size; i++) {
        for (j = 0; j < 3; j++) {
            printf("%5d", c[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void matrixMultiplication(int a[][2], int b[][3], int c[][3], int size) {
    int i, j, k;
    for (i = 0; i < size; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = 0;
            for (k = 0; k < 2; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}


int main(void)
{
    int X[4][2];
    int Y[2][3];
    int Z[4][3];


    printf("(4 x 2) 행렬 X 입력:\n");
    readMatrix(X, 4);
    printf("(2 x 3) 행렬 Y 입력:\n");
    readMatrix2(Y, 2);
    printf("행렬곱: \n");
    matrixMultiplication(X, Y, Z, 4);
    printMatrix(Z, 4);



}