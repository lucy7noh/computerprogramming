//컴퓨터학전공 20230791 노윤선
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
    int coins[4] = { 500, 100, 50, 10 };
    //거스름돈
    int change;
    int i;


    printf("Enter the amount of change: ");
    scanf("%d", &change);

    for (i = 0; i < 4; i++) {
        int count = change / coins[i];
        change = change % coins[i];
        printf("%d coin: %d\n", coins[i], count);
    }
    





    return 0;
}