//LAB9_5 20230791 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[50];
	int i;
	char * name, * age;
	int num;

	printf("�̸�(������� ���ĺ���� ����)�� ���̸� �Է��϶�(��: Abba 50):");
	gets(str);

	puts("�Է��� ����: ");
	puts(str); // �ٷ� ����غ���.

	name = strtok(str, " "); // ù ��° ��ū�� �̸�
	age = strtok(NULL, " "); // �� ��° ��ū�� ����

	num = atoi(age);


	printf("�̸��� %s �̰� �ѱ� ���̴� %s �Դϴ�.\n", name, age);
	printf("10 �� �Ŀ��� %d ���Դϴ�.\n", num + 10);
}