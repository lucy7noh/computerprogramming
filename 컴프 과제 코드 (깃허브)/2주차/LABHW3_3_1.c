#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#include <stdio.h>

char askReservation();
void printSeats(int s[], int size);
void processReservation(int s[], int size, int seatNumber);

int main(void) // 변경하지 마라 
{
    int seatChoice;
    int seats[SIZE] = { 0 };

    printf("******좌석 예약 시스템******\n");

    while (askReservation() == 'y')
    {
        printSeats(seats, SIZE);

        printf("몇번째 좌석? ");
        scanf("%d", &seatChoice);

        // 좌석 번호의 유효성 검사 추가
        if (seatChoice < 1 || seatChoice > SIZE) {
            printf("잘못된 좌석 번호입니다. 1에서 %d 사이의 번호를 입력하세요.\n", SIZE);
        }
        else {
            processReservation(seats, SIZE, seatChoice);
        }

        while (getchar() != '\n'); // 버퍼 비움 
    }
}

char askReservation()
{
    char choice; // char로 변경

    printf("\n좌석을 예약하시겠습니까?(y/n) ");
    scanf(" %c", &choice); // 입력받기 전 공백 문자를 무시하도록 수정

    return choice;
}

void processReservation(int s[], int size, int seatNumber)
{
    if (s[seatNumber - 1] == 0) { // 예약 가능이면  
        s[seatNumber - 1] = 1;
        printf("예약되었습니다.\n");
    }
    else { // 이미 예약되었으면 
        printf("이미 예약된 자리입니다.\n");
    }

    // 예약내용 반영한 좌석표 출력
    printSeats(s, size);
}

void printSeats(int s[], int size)
{
    printf("----------------------\n");
    printf(" 1 2 3 4 5 6 7 8 9 10\n");
    printf("----------------------\n");
    for (int i = 0; i < size; i++) {
        printf("%2d", s[i]);
    }
    printf("\n");
}