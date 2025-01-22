//LAB8_3_1 20230791 컴퓨터학과 노윤선 
#include <stdio.h>

// stringLength 함수 정의 추가
int stringLength(const char* s1) { // s1은 수정되지 않으므로 const 추가
	int count = 0;
	while (*s1) {
		count++;
		s1++;
	}
	return count;
}

// stringCopy 함수 정의 – 위의 것 그대로
void stringCopy(char* s1, const char* s2) // *s2는 바뀌지 않으므로 const 추가
{
	while (*s2) {
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
}

int main(void) {
	char copied[500];
	char data1[] = "abcde";
	char data2[] = "ABCDEFGH";
	stringCopy(copied, data1);
	printf("첫번째 복사 후 copied의 길이와 값은 %d와 %s이다.\n", stringLength(copied), copied);
	stringCopy(copied, data2);
	printf("두번째 복사 후 copied의 길이와 값은 %d와 %s이다.\n", stringLength(copied), copied);
}