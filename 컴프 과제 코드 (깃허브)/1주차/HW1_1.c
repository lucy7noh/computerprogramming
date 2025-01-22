//컴퓨터학전공 20230791 노윤선
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
    int data[100];  
    int num, i;
    int count[10] = { 0 };

    srand(time(NULL));

    // 난수 개수 입력 받음
    printf("Enter the number of random numbers:<<= 100>: ");
    scanf("%d", &num);

    // num개의 난수를 발생시킴
    for (i = 0; i < num; i++) {
        data[i] = rand() % 10;  
        count[data[i]]++;
    }

    // 0부터 9까지의 숫자 개수 출력

    for (i = 0; i < 10; i++) {
        printf("%d의 개수는 %d\n", i, count[i]);
    }

    printf("-----------------------------------\n");

    // 발생된 난수들을 한줄에 5개씩 출력
    printf("발생된 난수는\n");
    for (i = 0; i < num; i++) {
        printf("%d\t", data[i]);  
        if ((i + 1) % 5 == 0) {  
            printf("\n");
        }
    }

    

    return 0;
}