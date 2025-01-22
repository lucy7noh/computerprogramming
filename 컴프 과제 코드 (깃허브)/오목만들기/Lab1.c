// ���� �غ�: �� ���� 20230791 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BOARD_SIZE 3 // ���Ŀ� 10���� �ٲپ �����Ѵ�

// �� ������ ǥ�õ� �������� ����ϴ� �κ�
void display(char b[][BOARD_SIZE]) {
    char ch;
    int i, j;
    printf(" ");
    for (i = 0; i < BOARD_SIZE; i++)
        printf("%2d", i);
    printf("\n ---------------------\n");
    for (i = 0; i < BOARD_SIZE; i++) {
        printf("%3d |", i);
        for (j = 0; j < BOARD_SIZE; j++)
            printf(" %c", b[i][j]);
        printf("\n");
    }
}
void main() {
    char board[BOARD_SIZE][BOARD_SIZE]; // ���� ��
    char turn = 'X'; // ����� ����
    int r, c;
    int i, j;
    int count;

    // ������ �ʱ�ȭ
    for (i = 0; i < BOARD_SIZE; i++)
        for (j = 0; j < BOARD_SIZE; j++)
            board[i][j] = ' ';
    count = 1;

    // �ʱ� ������ ���
    display(board);

    do {
        printf("Player %c(�� ��):", turn);
        scanf("%d %d", &r, &c); // ��� �� �Է�

        if (r < 0 || r >= BOARD_SIZE || c < 0 || c >= BOARD_SIZE) {
            continue;
        }

        if (board[r][c] != ' ') {
            continue;
        }

        board[r][c] = turn;

        // ������Ʈ�� ������
        display(board);

        // ���� ����
        turn = (turn == 'X') ? 'O' : 'X';
        count++; // ���� ����
    } while (count <= BOARD_SIZE * BOARD_SIZE); // �ݺ� Ƚ���� �������� ���̸� ���� �� ����
}