//LAB7_4 20230791 컴퓨터학과 노윤선
#include <stdio.h>
#include <stdlib.h>

void generateData();  // 난수 생성 함수
void printData();     // 데이터 출력 함수
int totalData();      // 데이터의 합 계산 함수

int data[10];  // 전역 배열 선언 (크기 10)

int main(void)
{
    srand(200);  // 난수 생성 시드 값 설정
    generateData();  // 난수 생성
    printf("발생된 10개의 난수:\n");
    printData();  // 난수 출력
    printf("10개 난수의 합 = %d\n", totalData());  // 난수의 합 계산 및 출력
    return 0;
}

// generateData 함수는 data[0]..data[9]에 난수를 넣는다.
void generateData()
{
    int k;
    int* p = data;  // data 배열을 가리키는 포인터 p
    for (k = 0; k < 10; k++)
    {
        *p = rand() % 100;  // 0부터 99까지의 난수를 생성하여 p가 가리키는 위치에 저장
        p++;  // 포인터를 다음 배열 요소로 이동
    }
}

// printData 함수는 data[0]..data[9]의 값을 출력한다.
void printData()
{
    int* pi = data;  // data 배열을 가리키는 포인터 pi
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", *pi);  // pi가 가리키는 값을 출력
        pi++;  // 포인터를 다음 배열 요소로 이동
    }
    printf("\n");  // 줄 바꿈
}

// totalData 함수는 data[0]에서 data[9]까지의 값을 모두 더해 그 결과를 반환한다.
int totalData()
{
    int* pi = data;  // data 배열을 가리키는 포인터 pi
    int sum = 0;
    int i;
    for (i = 0; i < 10; i++)
    {
        sum += *pi;  // pi가 가리키는 값을 sum에 더함
        pi++;  // 포인터를 다음 배열 요소로 이동
    }
    return sum;  // 합계 반환
}