//���� ����:  20230791 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BOARD_SIZE 10 

// �� ������ ǥ�õ� �������� ����ϴ� �κ�
void display(char b[][BOARD_SIZE]) {
    int i, j;
    printf("    "); // ���� �� ���� �߰�
    for (i = 0; i < BOARD_SIZE; i++)
        printf("%2d", i);
    printf("\n   ---------------------\n");
    for (i = 0; i < BOARD_SIZE; i++) {
        printf("%2d |", i); // �� ��ȣ ���
        for (j = 0; j < BOARD_SIZE; j++)
            printf(" %c", b[i][j]);
        printf("\n");
    }
}
//�¸�����üũ: r��, c�࿡ ���� �������� ���񼺰��̸� 1, �ƴϸ� 0
int winCheck(char b[][BOARD_SIZE], int r, int c) {
    int count = 1;
    char now = b[r][c];
    int i;

    //�������� Ȯ��
    for (i = c - 1; i >= 0 && b[r][i] == now; i--) {
        count++;
        if (count > 5)
            return 0;
    }
    //���������� Ȯ��
    for (i = c + 1; i < BOARD_SIZE && b[r][i] == now; i++) {
        count++;
        if (count > 5) 
            return 0; 
    }
    // �밢�� Ȯ��
    for (i = 1; r + i < BOARD_SIZE && c - i >= 0 && b[r + i][c - i] == now; i++) count++; 
    for (i = 1; r - i >= 0 && c + i < BOARD_SIZE && b[r - i][c + i] == now; i++) count++; 
    if (count > 5)
        return 0;


    // ���밢�� Ȯ��
    for (i = 1; r + i < BOARD_SIZE && c + i < BOARD_SIZE && b[r + i][c + i] == now; i++) count++;
    for (i = 1; r - i >= 0 && c - i >= 0 && b[r - i][c - i] == now; i++) count++; 
    if (count > 5)return 0;


    //�Ʒ� �� Ȯ�� 
    for (i = r + 1;  i < BOARD_SIZE && b[i][c] == now; i++) {
        count++;
        if (count > 5)
            return 0;
    }
    //���� Ȯ�� 

    for (i = r - 1; i >= 0 && b[i][c] == now; i++) {
        count++;
        if (count > 5)
            return 0;
    }

    if (count == 5)
        return 1;

    return 0;
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

        // �¸� ���� Ȯ��
        if (winCheck(board, r, c)) {
            printf("Player %c wins!\n", turn);
            return;
        }

        // ���� ����
        turn = (turn == 'X') ? 'O' : 'X';
        count++; // ���� ����
    } while (count <= BOARD_SIZE * BOARD_SIZE); // �ݺ� Ƚ���� �������� ���̸� ���� �� ����

    printf("Nobody wins!\n");

}