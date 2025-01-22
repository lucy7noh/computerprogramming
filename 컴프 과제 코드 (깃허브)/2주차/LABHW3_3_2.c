//LABHW3_3_1 20230791 ��ǻ�������� ������ 
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#include <stdio.h>

int askReservation();
void printSeats(int s[], int size);
void processReservation(int s[], int size, int count);

int main(void) // �������� ���� 
{
    int reservationCount;
    int seats[SIZE] = { 0 };

    printf("******�¼� ���� �ý���******\n");

    while ((reservationCount = askReservation()) > 0)
    {
        if (reservationCount > SIZE) {
            printf("���� ���� �¼� �� �ʰ�\n");
            continue;
        }

        processReservation(seats, SIZE, reservationCount);
        printSeats(seats, SIZE);

        while (getchar() != '\n'); // ���� ��� 
    }

    printf("�¼� ���Ű� �Ϸ�Ǿ����ϴ�.\n");
    return 0;
}

int askReservation()
{
    int count;

    printf("\n�¼��� �����Ͻðڽ��ϱ�?(���) ");
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
        if (s[i] == 0) { // ���� ����
            s[i] = 1;
            reserve++;
        }
    }
}

void printSeats(int s[], int size)
{
    // ���೻�� �ݿ��� �¼�ǥ ��� 
    printf("----------------------\n");
    printf(" 1 2 3 4 5 6 7 8 9 10\n");
    printf("----------------------\n");
    for (int i = 0; i < size; i++) {
        printf("%2d", s[i]);
    }
    printf("\n");
}