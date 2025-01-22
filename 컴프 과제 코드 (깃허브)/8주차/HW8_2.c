//HW8_2 20230791 컴퓨터학과 노윤선 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int stringCompare(const char* s1, const char* s2)
{
    while (*s1 && *s2) {
        if (*s1 < *s2)
            return 1; // 정렬되어 있음
        else if (*s1 > *s2)
            return -1; // 정렬되어 있지 않음
        s1++;
        s2++;
    }

    // 두 문자열이 같다면
    if (*s1 == '\0' && *s2 == '\0')
        return 0;

    // 문자열이 같지 않지만 정렬되어 있는 경우
    return (*s1 < *s2) ? 1 : -1;
}

void stringCat(char* s1, const char* s2)
{
    while (*s1) // s1 끝으로 이동
        s1++;
    while (*s2) { // s2를 s1 끝에 붙임
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0'; // 문자열의 끝을 표시
}

void stringChange(char* s, char ch, char newCh)
{
    while (*s) {
        if (*s == ch)
            *s = newCh;
        s++;
    }
}

int main(void)
{
	char name1[20];
	char name2[20];

	printf("Enter the first name: ");
	scanf("%s", name1);
	printf("Enter the second name: ");
	scanf("%s", name2);
	if (stringCompare(name1, name2) == 0)
		printf("두개의 이름은 같다\n");
	else if (stringCompare(name1, name2) == 1)
		printf("두개의 이름은 다르며 정렬되어있다\n");
	else
		printf("두개의 이름은 다르며 정렬되어있지않다\n");
	stringCat(name1, name2);
	printf("The concatenated name is %s\n", name1);
	stringChange(name1, 'u', 'x');
	printf("The changed name is %s\n", name1);
}