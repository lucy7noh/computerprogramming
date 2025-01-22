// HW9_1 20230791 컴퓨터학과 노윤선
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
    char string[50]; // 입력되는 문자열을 저장
    char alphaString1[50]; // 입력문자열에서 알파벳만 저장
    char alphaString2[50]; // 대소문자를 바꿈
    char digitString[50]; // 입력문자열에서 숫자만 저장
    char convertedString[50]; // 문자들과 숫자들로 재배열한 문자열

    printf("문자열을 입력하세요: ");
    fgets(string, sizeof(string), stdin);

    int alphaIdx = 0;
    int digitIdx = 0;

    // 알파벳과 숫자를 구분하여 저장
    for (int i = 0; string[i] != '\0'; i++) {
        if (isalpha(string[i])) {
            alphaString1[alphaIdx++] = string[i];
        }
        else if (isdigit(string[i])) {
            digitString[digitIdx++] = string[i];
        }
    }
    alphaString1[alphaIdx] = '\0';
    digitString[digitIdx] = '\0';

    printf("문자들은 %s\n", alphaString1);
    printf("숫자들은 %s\n", digitString);

    // 대소문자를 바꾼 문자 저장
    for (int i = 0; i < strlen(alphaString1); i++) {
        if (isupper(alphaString1[i])) {
            alphaString2[i] = tolower(alphaString1[i]);
        }
        else if (islower(alphaString1[i])) {
            alphaString2[i] = toupper(alphaString1[i]);
        }
    }
    alphaString2[strlen(alphaString1)] = '\0';

    printf("대소문자를 바꾼 문자들은 %s\n", alphaString2);

    // 문자와 숫자를 결합하여 재배열
    strcpy(convertedString, alphaString1);
    strcat(convertedString, digitString);
    printf("문자들과 숫자들로 재배열한 문자열은 %s\n", convertedString);

    return 0;
}







