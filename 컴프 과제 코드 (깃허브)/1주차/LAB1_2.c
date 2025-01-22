#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int data[100];  // 최대 100개의 난수를 저장할 배열
    int num, i;
    int max;  // 최대값을 저장할 변수
    srand(time(NULL));  // 실행할 때마다 다른 난수를 발생시키도록 설정

    // 난수 개수 입력 받음
    printf("Enter the number of random numbers (<= 50): ");
    scanf("%d", &num);

    // num개의 난수를 발생시킴
    for (i = 0; i < num; i++) {
        data[i] = rand() % 100;  // 0부터 99 사이의 난수 발생
    }

    // 발생한 난수 중 가장 큰 값을 찾음
    max = data[0];  // 첫 번째 값을 최대값으로 설정
    for (i = 1; i < num; i++) {
        if (data[i] > max) {
            max = data[i];
        }
    }
    // 가장 큰 수 출력
    printf("\n최대값은 %d\n", max);




    printf("발생된 난수는\n");
    for (i = 0; i < num; i++) {
        printf("%5d\t", data[i]);
        if ((i + 1) % 5 == 0) {
            printf("\n");
        }
    }

    return 0;
}