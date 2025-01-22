//LAB9_2 20230791 컴퓨터학과 노윤선

/*
#include <stdio.h> // LAB9_2a
#include <string.h>
int main(void)
{
	char str1[5];
	printf("문자열을 입력하세요:");
	gets(str1); //1, 2, 3 그리고 '\0'으로 문자열이 만들어짐
	printf("입력한 문자열는 %s\n", str1);
	printf("문자열의 크기는 %d\n", strlen(str1));
}*/#include <stdio.h> // LAB9_2b
#include <string.h>
int main(void)
{
	char str2[5];
	printf("문자열을 입력하세요:");
	fgets(str2, sizeof(str2), stdin); //1,2,3 그리고 \n 그리고 \0으로 문자열이 만들어짐
	printf("입력한 문자열는 %s\n", str2);
	printf("문자열의 크기는 %d\n", strlen(str2));
}