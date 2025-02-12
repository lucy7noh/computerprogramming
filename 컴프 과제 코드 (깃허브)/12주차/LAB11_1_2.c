//LAB11_1_2(구조체 포인터를 함수의 매개변수로 전달) 
//20230791 컴퓨터학과 노윤선
#include <stdio.h>
#include <stdlib.h>
// 1) typedef으로 구조체 타입 Score 정의하라.
typedef struct {
	int midterm;
	int final;
} Score;


void printScore(Score* p) {
	printf("중간고사 성적은 %d\n", p->midterm);
	printf("기말고사 성적은 %d\n", p->final);
} // 매개변수 변경
Score* biggerScore(Score* p1, Score* p2) {
	if ((p1->midterm + p1->final) >= (p2->midterm + p2->final)) {
		return p1;
	}
	else {
		return p2;
	}

} // 반환타입 변경, 매개변수 변경
void totalScore(Score* p1, Score* p2, Score* tp) {

	tp->midterm = p1->midterm + p2->midterm;
	tp->final = p1->final + p2->final;
 } // 반환타입 변경, 매개변수 한 개 추가

Score createScore(int m, int f) //5)
{
	Score s;
	s.midterm = m;
	s.final = f;

	return s;
}// 변경되지 않음!
// main함수는 아래와 같이 변경된다.
int main(void) {
	Score s1, s2, temp;
	s1.midterm = 50; s1.final = 100;
	s2.midterm = 70; s2.final = 70;
	printf("1)-----------------------------\n");
	printScore(&s1);
	printScore(&s2);
	printf("2)-----------------------------\n");
	printf("둘중 성적이 좋은 점수:\n");
	printScore(biggerScore(&s1, &s2));
	printf("3)-----------------------------\n");
	printf("두 성적의 총 합:\n");
	totalScore(&s1, &s2, &temp);
	printScore(&temp);
	printf("4)-----------------------------\n");
	temp = createScore(99, 99);
	printScore(&temp);
}