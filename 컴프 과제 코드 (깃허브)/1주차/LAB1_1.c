//20230791 컴퓨터학전공 노윤선
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num[5];   // 5개의 정수를 저장할 배열
    int sum = 0;  // 총합을 저장할 변수
    int aver;     // 평균을 저장할 변수

    // 배열의 각 요소를 입력받음 
    for (int i = 0; i < 5; i++) {
        printf("Enter %dth number: ", i + 1);  // 사용자에게 1부터 5까지의 순서를 보여줌
        scanf("%d", &num[i]);
    }

    // 배열의 총합을 계산
    for (int i = 0; i < 5; i++) {
        sum += num[i];
    }

    printf("------------------------------\n");
    printf("총합은 %d\n", sum);

    // 평균 계산
    aver = sum / 5;
    printf("평균은 %d\n", aver);

    printf("------------------------------\n");

   
    for (int i = 0; i < 5; i++) {
        printf("array[%d]: %d\n", i, num[i]);
    }

    

    return 0;
}