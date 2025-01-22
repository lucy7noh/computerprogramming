#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#include <stdio.h>

char askReservation();
void printSeats(int s[], int size);
void processReservation(int s[], int size, int seatNumber);

int main(void) // �������� ���� 
{
    int seatChoice;
    int seats[SIZE] = { 0 };

    printf("******�¼� ���� �ý���******\n");

    while (askReservation() == 'y')
    {
        printSeats(seats, SIZE);

        printf("���° �¼�? ");
        scanf("%d", &seatChoice);

        // �¼� ��ȣ�� ��ȿ�� �˻� �߰�
        if (seatChoice < 1 || seatChoice > SIZE) {
            printf("�߸��� �¼� ��ȣ�Դϴ�. 1���� %d ������ ��ȣ�� �Է��ϼ���.\n", SIZE);
        }
        else {
            processReservation(seats, SIZE, seatChoice);
        }

        while (getchar() != '\n'); // ���� ��� 
    }
}

char askReservation()
{
    char choice; // char�� ����

    printf("\n�¼��� �����Ͻðڽ��ϱ�?(y/n) ");
    scanf(" %c", &choice); // �Է¹ޱ� �� ���� ���ڸ� �����ϵ��� ����

    return choice;
}

void processReservation(int s[], int size, int seatNumber)
{
    if (s[seatNumber - 1] == 0) { // ���� �����̸�  
        s[seatNumber - 1] = 1;
        printf("����Ǿ����ϴ�.\n");
    }
    else { // �̹� ����Ǿ����� 
        printf("�̹� ����� �ڸ��Դϴ�.\n");
    }

    // ���೻�� �ݿ��� �¼�ǥ ���
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