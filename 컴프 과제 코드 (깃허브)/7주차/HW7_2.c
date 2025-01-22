//HW7_2 20230791 컴퓨터학과 노윤
#include <stdio.h>
#include <stdlib.h>

void generateData();  // 난수 생성 함수
void printData();     // 데이터 출력 함수
int totalData();      // 데이터의 합 계산 함수

static int data[3][10];  // 계산 수행에 사용할 정적 변수

void main()
{
    srand(200);  // random 값 출력에 사용하는 함수. Seed 값을 부여
    generateData();  // 난수 생성
    printData();     // 난수 출력
    printf("전체의 합은: %d\n", totalData());  // 난수의 합 계산 및 출력
}

// generateData 함수는 0~99 사이의 난수를 data 배열에 저장한다.
void generateData()
{
    int* p = &data[0][0];  // 2차원 배열의 첫 번째 요소를 가리키는 포인터
    int i;
    for (i = 0; i < 30; i++) {
        *p = rand() % 100;  // 0부터 99까지의 난수를 생성하여 p가 가리키는 위치에 저장
        p++;  // 포인터를 다음 배열 요소로 이동
    }
}

// printData 함수는 2차원 배열의 값을 출력한다.
void printData()
{
    int i, j;
    int* p = &data[0][0];  // 2차원 배열의 첫 번째 요소를 가리키는 포인터
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++) {
            printf("%d ", *p);  // 포인터가 가리키는 값을 출력
            p++;  // 포인터를 다음 배열 요소로 이동
        }
        printf("\n");  // 줄 바꿈
    }
}

// totalData 함수는 2차원 배열의 모든 값을 더한 결과를 반환한다.
int totalData()
{
    int* p = &data[0][0];  // 2차원 배열의 첫 번째 요소를 가리키는 포인터
    int i, total = 0;
    for (i = 0; i < 30; i++) {
        total += *p;  // 포인터가 가리키는 값을 total에 더함
        p++;  // 포인터를 다음 배열 요소로 이동
    }
    return total;  // 합계 반환
}