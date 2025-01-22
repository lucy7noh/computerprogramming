//LABHW3_3_1 20230791 컴퓨터학전공 노윤선 
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#include <stdio.h>

int askReservation();
void printSeats(int s[], int size);
void processReservation(int s[], int size, int count);

int main(void) // 변경하지 마라 
{
    int reservationCount;
    int seats[SIZE] = { 0 };

    printf("******좌석 예약 시스템******\n");

    while ((reservationCount = askReservation()) > 0)
    {
        if (reservationCount > SIZE) {
            printf("예약 가능 좌석 수 초과\n");
            continue;
        }

        processReservation(seats, SIZE, reservationCount);
        printSeats(seats, SIZE);

        while (getchar() != '\n'); // 버퍼 비움 
    }

    printf("좌석 예매가 완료되었습니다.\n");
    return 0;
}

int askReservation()
{
    int count;

    printf("\n좌석을 예약하시겠습니까?(몇명) ");
    scanf("%d", &count);

    return count;
}

void processReservation(int s[], int size, int count)
{
    int reserve = 0;

    for (int i = 0; i < size; i++) {
        if (reserve >= count) {
            break;
        }
        if (s[i] == 0) { // 예약 가능
            s[i] = 1;
            reserve++;
        }
    }
}

void printSeats(int s[], int size)
{
    // 예약내용 반영한 좌석표 출력 
    printf("----------------------\n");
    printf(" 1 2 3 4 5 6 7 8 9 10\n");
    printf("----------------------\n");
    for (int i = 0; i < size; i++) {
        printf("%2d", s[i]);
    }
    printf("\n");
}