//HW10_1 20230791 컴퓨터학과 노윤선
#define _CRT_SECURE_NO_WARNINGS
struct student{
    char name[20];
    int midterm;
    int final;
    int average;
    char grade;
};
#include <stdio.h>
#include <string.h>
int main(void)
{
    struct student s[3];
    int i = 0;
    int midterm_sum = 0, final_sum = 0;


    for (i = 0; i < 3; i++) {
        printf("Enter student name: ");
        scanf("%s", s[i].name);
        printf("Enter midterm and final score: ");
        scanf("%d %d", &s[i].midterm, &s[i].final);

    }
    printf("\n이름\t중간\t학기말\t평균\n");
   
    for (i = 0; i < 3; i++) {
        s[i].average = (s[i].midterm + s[i].final) / 2;
        midterm_sum += s[i].midterm;
        final_sum += s[i].final;
        printf("%s\t%d\t%d\t%d\n", s[i].name, s[i].midterm, s[i].final, s[i].average);
    }
    printf("\n이름\t학점\n");
    for (i = 0; i < 3; i++) {
        if (s[i].average >= 80)
            s[i].grade = 'A';
        else if(s[i].average >= 50)
            s[i].grade = 'B';
        else
            s[i].grade = 'F';

        printf("%s\t%c\n", s[i].name, s[i].grade);
    }


    printf("\n중간고사의 평균 = %d\n", midterm_sum / 3); 
    printf("학기말고사의 평균 = %d\n", final_sum / 3);


    
    return 0;
}