//HW11_2 20230791 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct {
	char name[20];
	int midterm;
	int final;
	int average;
}Student;
// typedef����Ͽ� Student ����
typedef struct {
	int num;
	Student s[40];
}CClass;
// typedef����Ͽ� CClass ����

void printClass(CClass* cp)
{
	int i;
	for (i = 0; i < cp->num; i++) {
		printf("%s\t", cp->s[i].name);
		printf("%d\t%d\t%d\n", cp->s[i].midterm, cp->s[i].final, cp->s[i].average);
	}
}

void readClass(CClass* cp) {
	int i;
	for (i = 0; i < cp->num; i++) {
		printf("Enter student name: ");
		scanf("%s", cp->s[i].name);
		printf("Enter midterm and final score: ");
		scanf("%d %d", &cp->s[i].midterm, &cp->s[i].final);
	}
}
void calculateClassAverage(CClass* cp) {
	int i;
	for (i = 0; i < cp->num; i++) {
		cp->s[i].average = (cp->s[i].midterm + cp->s[i].final) / 2;
	}
}


int main(void)
{
	CClass cp;
	Student all = { "Total", 0, 0, 0 };
	printf("Enter a number of student:");
	scanf("%d", &cp.num); //�л� �� �Է�

	readClass(&cp); // �� �ڵ��� a)�κ� ��ġ
	calculateClassAverage(&cp); // �� �ڵ��� b)�κ� ��ġ
	printf("\n�̸�\t�߰�\t�б⸻\t���\n");
	printClass(&cp);
}