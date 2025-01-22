//HW4_5_2 20230791 컴퓨터학과 노윤선

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

    printf("숫자를 입력하세요: ");
    scanf("%d", &num);
    
    cycle = get_cycle_number(num);  
    printf("\n");
    printf("사이클 길이: %d\n", cycle);  

    return 0;
}