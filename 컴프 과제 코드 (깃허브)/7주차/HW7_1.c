//HW7_1 20230791 컴퓨터학과 노윤선

#include <stdio.h>
#include <stdlib.h>
void generateData();
void printData();
int totalData();
int maxData();
int data[10]; // 계산 수행에 사용할 전역 변수
int main(void)
{
	srand(200);
	generateData();
	printf("발생된 10개의 난수:\n");
	printData();
	printf("10개 난수의 합 = %d \n", totalData());
	printf("10개 난수중 가장 큰 수 = %d \n", maxData());
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

// maxData 함수는 data[0]에서 data[9]까지의 값 중 가장 큰 값을 찾는다.
int maxData()
{
    int* pi = data;  // data 배열을 가리키는 포인터 pi
    int max = *pi;  // 첫 번째 값을 max로 초기화
    int i;
    for (i = 1; i < 10; i++)  // 두 번째 요소부터 비교 시작
    {
        pi++;  // 포인터를 다음 배열 요소로 이동
        if (*pi > max)  // 현재 값이 max보다 크면
        {
            max = *pi;  // max를 현재 값으로 갱신
        }
    }
    return max;  // 가장 큰 값 반환
}