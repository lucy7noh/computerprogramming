//HW4_5_2 20230791 ��ǻ���а� ������

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_cycle_number(int n) {

    printf("%d ", n);


    if (n == 1) {
        return 1; 
    }

   
    if (n % 2 == 0) {
        return 1 + get_cycle_number(n / 2);  
    }
    else {
        return 1 + get_cycle_number(n * 3 + 1);
    }
}

int main(void) {
    int num;
    int cycle;

    printf("���ڸ� �Է��ϼ���: ");
    scanf("%d", &num);
    
    cycle = get_cycle_number(num);  
    printf("\n");
    printf("����Ŭ ����: %d\n", cycle);  

    return 0;
}