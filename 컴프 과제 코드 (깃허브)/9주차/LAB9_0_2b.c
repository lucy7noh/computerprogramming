//LAB9_0_2b 20230791 ��ǻ���а� ������

#include <stdio.h>
#include <ctype.h> //����ó�� �Լ� ����� ����
void main()
{
	char c;
	printf("Enter characters(^Z for exit):\n");
	c = fgetc(stdin);
	while (c != EOF) //EOF > ctrl zŰ
	{
		if (isupper(c))
			putchar(tolower(c));
		else if (islower(c))
			putchar(toupper(c));
		else
			putchar(c);


		c = fgetc(stdin);
	}
}
