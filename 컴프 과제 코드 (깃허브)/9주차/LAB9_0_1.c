//LAB9_0_1 20230791 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
// ���� 1 �� ����
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
int main(void)
{
	char ch;
	while (1)
	{
		//scanf("%c", &ch); // �� 1)���ۿ� ���� enter�� �ľ��� q�� �ƴϳ� ����
		//ch = getchar(); // �� 2) 1���� �Ȱ��� ����
		//ch = fgetc(stdin); // �� 3)1,2���� �Ȱ��� ���� (q�� ���ö����� �ݺ�)
		//ch = _getch(); // �� 4) enterŰ �������ʾƵ� �Էµ�
		ch = _getche(); // �� 5)���� ����, ���ڴ����� ó��, enterŰ ������ �ʾƵ� ó����
		if (ch == 'q') break;
		putchar(toupper(ch)); // printf("%c", ch), _putch(ch), fputc(ch, stdout)�� ��� ���� ���
	}
}