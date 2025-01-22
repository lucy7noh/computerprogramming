//LAB11_1_1(구조체 변수를 함수의 매개변수로 전달)
//20230791 컴퓨터학과 노윤선
#include <stdio.h>
#include <stdlib.h>
// 1) typedef으로 구조체 타입 Score 정의하라.
typedef struct {
	int midterm;
	int final;
} Score;


void printScore(Score s) //2)
{
	printf("중간고사 성적은 %d\n", s.midterm);
	printf("학기말고사 성적은 %d\n", s.final);
}
Score biggerScore(Score s1, Score s2) //3)
{
	if ((s1.midterm + s1.final) >= (s2.midterm + s2.final)) {
		return s1;
	}
	else {
		return s2;
	}
}
Score totalScore(Score s1, Score s2) //4)
{
	Score sum;
	sum.midterm = s1.midterm + s2.final;
	sum.final = s1.midterm + s2.final;

	return sum;
}
//매개변수로 주어진 중간고사와 학기말고사의 성적을 갖는 구조체 변수를 반환하는 함수
Score createScore(int m, int f) //5)
{
	Score s;
	s.midterm = m;
	s.final = f;

	return s;
}
int main(void) {
	Score s1, s2, s3;
	s1.midterm = 50; s1.final = 100;
	s2.midterm = 70; s2.final = 70;
	printf("1)-----------------------------\n");
	printScore(s1);
	printScore(s2);
	printf("2)-----------------------------\n");
	printf("둘 중 성적이 좋은 점수:\n");
	printScore(biggerScore(s1, s2));
	printf("3)-----------------------------\n");
	printf("두 성적의 총 합:\n");
	printScore(totalScore(s1, s2));
	printf("4)-----------------------------\n");
	s3 = createScore(99, 99);
	printScore(s3);
}