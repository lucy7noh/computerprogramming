//LAB9_0_2 20230791 ��ǻ���а� ������

#include <stdio.h>
#include <ctype.h> //����ó�� �Լ� ����� ����
void main()
{
	char c;
	printf("Enter characters(^Z for exit):\n");
	c = getchar();
	while (c != EOF) //EOF > ctrl zŰ
	{
		putchar(c);
		c = getchar();
	}
}