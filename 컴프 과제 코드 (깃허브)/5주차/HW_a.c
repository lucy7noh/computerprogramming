//HW(지뢰찾기) 20230791 컴퓨터학과 노윤선

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define X_VALUE 5 //2차원 배열의 행의 수 
#define Y_VALUE 5 //2차원 배열의 열의 수 

void readBombInfo(char grid[][Y_VALUE + 1])
{
    int i;
    // grid 및 지뢰 정보 입력 
    printf("Input Grid\n");
    for (i = 0; i < X_VALUE; i++)
        scanf("%s", grid[i]); // 이해할 수있는가? 문자열 형식으로 읽음! 
}
void countBomb(char grid[][Y_VALUE + 1], int numOfBombs[][Y_VALUE])
{
    int i, j;
    int k, t;

    // 모든 칸을 순회하며 주변 지뢰 개수 계산
    for (i = 0; i < X_VALUE; i++) {
        for (j = 0; j < Y_VALUE; j++) {
            // 지뢰가 있는 칸은 넘어감
            if (grid[i][j] == '*') {
                continue;
            }
            // 주변 8칸을 살펴봄
            for (k = -1; k <= 1; k++) {
                for (t = -1; t <= 1; t++) {
                    // 배열 범위를 벗어나지 않도록 체크
                    if (i + k >= 0 && i + k < X_VALUE && j + t >= 0 && j + t < Y_VALUE) {
                        if (grid[i + k][j + t] == '*') {
                            numOfBombs[i][j]++; // 지뢰가 있으면 카운트 증가
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
    char grid[X_VALUE][Y_VALUE + 1]; //문자열의 경우 마지막에 NULL이 들어가야 하므로  
    // 5X5 배열이 아닌 5X6 배열이 되어야 한다.  
    int numOfBombs[X_VALUE][Y_VALUE] = { 0 }; //지뢰의 개수를 넣는 정수형 5X5 배열 

    readBombInfo(grid);
    countBomb(grid, numOfBombs);
    display_numOfBombs(grid, numOfBombs);
}