//HW16_4 20230791 컴퓨터학전공 노윤선

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//난수를 배열에 넣음
void initTable(int table[][5], int rows) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < 5; j++) {
            table[i][j] = rand() % 100; // 0에서 99 사이의 난수 발생
        }
    }
}

//총합 계산하여 반환
int totalTable(int table[][5], int rows) {
    int i, j;
    int sum = 0;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < 5; j++) {
            sum += table[i][j];
        }
    }

    return sum;
}

//배열의 내용 출력
void printTable(int table[][5], int rows) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < 5; j++) {
            printf("%4d", table[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    int table[3][5];
    int i, j;
    int total = 0;

    srand(time(NULL));


    initTable(table, 3);
    printf("발생된 난수의 평균은 %d입니다\n", totalTable(table, 3) / 15);

    printTable(table, 3); // 호출 

    printf("----각 열의 합----\n");

    for (j = 0; j < 5; j++) {
        for (i = 0; i < 3; i++) {
            total += table[i][j];
           
        }
        printf("%4d", total);
    
    }
    return 0;
}