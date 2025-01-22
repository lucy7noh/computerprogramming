//LAB9_0_2 20230791 컴퓨터학과 노윤선

#include <stdio.h>
#include <ctype.h> //문자처리 함수 사용을 위해
void main()
{
	char c;
	printf("Enter characters(^Z for exit):\n");
	c = getchar();
	while (c != EOF) //EOF > ctrl z키
	{
		putchar(c);
		c = getchar();
	}
}