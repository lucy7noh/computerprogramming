//LAB10_1 20230791 컴퓨터학과 노윤선
#define _CRT_SECURE_NO_WARNINGS
struct customer {
    char name[40];
    int age;
};
#include <stdio.h>
#include <string.h>
int main(void)
{
    // 변수 선언 부분
    struct customer aCustomer = { "박수희", 36 };
    
    printf("이름: %s\n", aCustomer.name);
    printf("나이: %d\n", aCustomer.age);

    struct customer cArray[2] = { {"장동건", 38}, {"고소영", 38} };
    int i;

    for (i = 0; i < 2; i++) {
        printf("Name = %s, Age = %d\n", cArray[i].name, cArray[i].age);
    }
  

    return 0;
}