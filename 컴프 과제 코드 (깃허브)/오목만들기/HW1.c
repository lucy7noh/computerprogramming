//수평 오목:  20230791 컴퓨터학과 노윤선
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BOARD_SIZE 10 

// 각 선택이 표시된 게임판을 출력하는 부분
void display(char b[][BOARD_SIZE]) {
    int i, j;
    printf("    "); // 숫자 앞 공백 추가
    for (i = 0; i < BOARD_SIZE; i++)
        printf("%2d", i);
    printf("\n   ---------------------\n");
    for (i = 0; i < BOARD_SIZE; i++) {
        printf("%2d |", i); // 행 번호 출력
        for (j = 0; j < BOARD_SIZE; j++)
            printf(" %c", b[i][j]);
        printf("\n");
    }
}
//승리여부체크: r열, c행에 말을 놓았을때 오목성공이면 1, 아니면 0
int winCheck(char b[][BOARD_SIZE], int r, int c) {
    int count = 1;
    char now = b[r][c];
    int i;

    //왼쪽으로 확인
    for (i = c - 1; i >= 0 && b[r][i] == now; i--) {
        count++;
        if (count > 5)
            return 0;
    }
    //오른쪽으로 확인
    for (i = c + 1; i < BOARD_SIZE && b[r][i] == now; i++) {
        count++;
        if (count > 5) 
            return 0; 
    }
    // 대각선 확인
    for (i = 1; r + i < BOARD_SIZE && c - i >= 0 && b[r + i][c - i] == now; i++) count++; 
    for (i = 1; r - i >= 0 && c + i < BOARD_SIZE && b[r - i][c + i] == now; i++) count++; 
    if (count > 5)
        return 0;


    // 역대각선 확인
    for (i = 1; r + i < BOARD_SIZE && c + i < BOARD_SIZE && b[r + i][c + i] == now; i++) count++;
    for (i = 1; r - i >= 0 && c - i >= 0 && b[r - i][c - i] == now; i++) count++; 
    if (count > 5)return 0;


    //아래 로 확인 
    for (i = r + 1;  i < BOARD_SIZE && b[i][c] == now; i++) {
        count++;
        if (count > 5)
            return 0;
    }
    //위로 확인 

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

        // 승리 여부 확인
        if (winCheck(board, r, c)) {
            printf("Player %c wins!\n", turn);
            return;
        }

        // 차례 변경
        turn = (turn == 'X') ? 'O' : 'X';
        count++; // 숫자 세기
    } while (count <= BOARD_SIZE * BOARD_SIZE); // 반복 횟수가 오목판의 길이를 넘을 수 없음

    printf("Nobody wins!\n");

}