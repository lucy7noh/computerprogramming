//LAB10_1 20230791 컴퓨터학과 노윤선
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct customer {
    char name[40];
    int age;
};

int main(void) {
    struct customer aCustomer; // 구조체 변수 선언
    struct customer* cp;       // 구조체 포인터 선언

    // aCustomer의 주소를 cp가 가리키도록 설정
    cp = &aCustomer;

    // 입력 받기
    printf("Enter customer name: ");
    scanf("%s", cp->name); 
    printf("Enter age: ");
    scanf("%d", &cp->age); 
    // 출력
    printf("\n이름\t나이\n");


    return 0;
}