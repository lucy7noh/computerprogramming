//HW16_3 20230791 컴퓨터학전공 노윤선

#include <stdio.h> 
int main(void)
{
    int gradeTable[5][4] = { {10, 15, 20, 0}, {30, 35, 20, 0},
        {60, 65, 20, 0}, {90, 95, 20, 0}, {0, 0, 0, 0} };
    int i, j;


    printf("a)\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%4d", gradeTable[i][j]);
        printf("\n");
    }
    // b)추가 

    printf("b)\n");
    for (i = 0; i < 4; i++) {
    for (j = 0; j < 3; j++) {
            gradeTable[i][3] += gradeTable[i][j];
        }
    }

    for (j = 0; j < 3; j++) {
        for (i = 0; i < 4; i++) {
            gradeTable[4][j] += gradeTable[i][j];
        }
    }

  
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%4d", gradeTable[i][j]);
        printf("\n");
    }

    return 0;
}