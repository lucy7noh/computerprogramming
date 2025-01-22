//LAB9_0_1 20230791 컴퓨터학과 노윤선
#define _CRT_SECURE_NO_WARNINGS
// 버전 1 의 연습
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
int main(void)
{
	char ch;
	while (1)
	{
		//scanf("%c", &ch); // 예 1)버퍼에 쌓임 enter를 쳐야함 q냐 아니냐 질문
		//ch = getchar(); // 예 2) 1번과 똑같은 원리
		//ch = fgetc(stdin); // 예 3)1,2번과 똑같은 원리 (q가 들어올때까지 반복)
		//ch = _getch(); // 예 4) enter키 누르지않아도 입력됨
		ch = _getche(); // 예 5)에코 있음, 문자단위로 처리, enter키 누르지 않아도 처리됨
		if (ch == 'q') break;
		putchar(toupper(ch)); // printf("%c", ch), _putch(ch), fputc(ch, stdout)나 모두 같은 결과
	}
}