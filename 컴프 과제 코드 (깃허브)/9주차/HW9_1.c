// HW9_1 20230791 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
    char string[50]; // �ԷµǴ� ���ڿ��� ����
    char alphaString1[50]; // �Է¹��ڿ����� ���ĺ��� ����
    char alphaString2[50]; // ��ҹ��ڸ� �ٲ�
    char digitString[50]; // �Է¹��ڿ����� ���ڸ� ����
    char convertedString[50]; // ���ڵ�� ���ڵ�� ��迭�� ���ڿ�

    printf("���ڿ��� �Է��ϼ���: ");
    fgets(string, sizeof(string), stdin);

    int alphaIdx = 0;
    int digitIdx = 0;

    // ���ĺ��� ���ڸ� �����Ͽ� ����
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

    printf("���ڵ��� %s\n", alphaString1);
    printf("���ڵ��� %s\n", digitString);

    // ��ҹ��ڸ� �ٲ� ���� ����
    for (int i = 0; i < strlen(alphaString1); i++) {
        if (isupper(alphaString1[i])) {
            alphaString2[i] = tolower(alphaString1[i]);
        }
        else if (islower(alphaString1[i])) {
            alphaString2[i] = toupper(alphaString1[i]);
        }
    }
    alphaString2[strlen(alphaString1)] = '\0';

    printf("��ҹ��ڸ� �ٲ� ���ڵ��� %s\n", alphaString2);

    // ���ڿ� ���ڸ� �����Ͽ� ��迭
    strcpy(convertedString, alphaString1);
    strcat(convertedString, digitString);
    printf("���ڵ�� ���ڵ�� ��迭�� ���ڿ��� %s\n", convertedString);

    return 0;
}







