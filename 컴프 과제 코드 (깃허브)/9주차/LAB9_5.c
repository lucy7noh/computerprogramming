//LAB9_5 20230791 컴퓨터학과 노윤선
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[50];
	int i;
	char * name, * age;
	int num;

	printf("이름(공백없이 알파벳들로 구성)과 나이를 입력하라(예: Abba 50):");
	gets(str);

	puts("입력한 정보: ");
	puts(str); // 바로 출력해본다.

	name = strtok(str, " "); // 첫 번째 토큰은 이름
	age = strtok(NULL, " "); // 두 번째 토큰은 나이

	num = atoi(age);


	printf("이름은 %s 이고 한국 나이는 %s 입니다.\n", name, age);
	printf("10 년 후에는 %d 살입니다.\n", num + 10);
}