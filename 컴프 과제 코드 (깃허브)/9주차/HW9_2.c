// HW9_2 20230791 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char id[15];    // �ԷµǴ� �ֹε�Ϲ�ȣ
    char year[3];   // ��� ����
    int birthYear;
    int avgage = 0; 

    printf("�ֹε�Ϲ�ȣ �Է�<'-'����>: ");
    scanf("%s", id);

    strncpy(year, id, 2);
    year[2] = '\0'; // ���ڿ� ���� �߰�
    birthYear = (year[0] - '0') * 10 + (year[1] - '0') + 1900;

    printf("����� %d�⵵ ���̱���.\n", birthYear);

    if (isdigit(id[7])) { 
        if (id[7] == '1') {
            printf("���ں��̽ñ���.\n");
            avgage = 77; 
        }
        else if (id[7] == '2') {
            printf("���ں��̽ñ���.\n");
            avgage = 84; 
        }
      
    }
      printf("��� ���� %d�� ���ϸ� %d���Դϴ�.\n", avgage, birthYear + avgage);

    return 0;
}