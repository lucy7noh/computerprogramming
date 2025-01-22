// 오목 준비: 말 놓기 20230791 컴퓨터학과 노윤선
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BOARD_SIZE 3 // 추후에 10으로 바꾸어서 진행한다

// 각 선택이 표시된 게임판을 출력하는 부분
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
    char board[BOARD_SIZE][BOARD_SIZE]; // 오목 판
    char turn = 'X'; // 사용자 차례
    int r, c;
    int i, j;
    int count;

    // 오목판 초기화
    for (i = 0; i < BOARD_SIZE; i++)
        for (j = 0; j < BOARD_SIZE; j++)
            board[i][j] = ' ';
    count = 1;

    // 초기 게임판 출력
    display(board);

    do {
        printf("Player %c(행 열):", turn);
        scanf("%d %d", &r, &c); // 행과 열 입력

        if (r < 0 || r >= BOARD_SIZE || c < 0 || c >= BOARD_SIZE) {
            continue;
        }

        if (board[r][c] != ' ') {
            continue;
        }

        board[r][c] = turn;

        // 업데이트된 게임판
        display(board);

        // 차례 변경
        turn = (turn == 'X') ? 'O' : 'X';
        count++; // 숫자 세기
    } while (count <= BOARD_SIZE * BOARD_SIZE); // 반복 횟수가 오목판의 길이를 넘을 수 없음
}