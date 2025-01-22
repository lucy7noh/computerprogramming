// HW9_2 20230791 컴퓨터학과 노윤선
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char id[15];    // 입력되는 주민등록번호
    char year[3];   // 출생 연도
    int birthYear;
    int avgage = 0; 

    printf("주민등록번호 입력<'-'포함>: ");
    scanf("%s", id);

    strncpy(year, id, 2);
    year[2] = '\0'; // 문자열 종료 추가
    birthYear = (year[0] - '0') * 10 + (year[1] - '0') + 1900;

    printf("당신은 %d년도 생이군요.\n", birthYear);

    if (isdigit(id[7])) { 
        if (id[7] == '1') {
            printf("남자분이시군요.\n");
            avgage = 77; 
        }
        else if (id[7] == '2') {
            printf("여자분이시군요.\n");
            avgage = 84; 
        }
      
    }
      printf("평균 수명 %d를 더하면 %d년입니다.\n", avgage, birthYear + avgage);

    return 0;
}