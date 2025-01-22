#include <stdio.h>
int main(void)
{
	int x[] = { 0, 0, 1, 2, 3 };
	char c[] = "BBCDE";
	double f = 2.3;
	int i, sum = 0;
	// 가)
	//포인터 선언 
	int * px;
	int * pc;
	int * pd;

	px = x;
	pc = c;
	pd = &f;

	printf("가-1) %d %c %.1f\n", x[0], c[0], f);
	printf("가-2) %d %c %.1f\n", *px, *pc, *pd);
		
	// 나) 
	*px = -1;   // x[0]을 -1로 변경
	*pc = 'A';  // c[0]을 'A'로 변경
	*pd = 5.7;  // f 값을 5.7로 변경

	// 변경된 값 출력
	printf("나) %d %c %.1f\n", *px, *pc, *pd);


	// 다) 포인터를 이용하여 x 배열의 모든 요소를 합산하여 sum에 저장
	px = x;  // 다시 x 배열의 첫 번째 요소를 가리킴
	for (int i = 0; i < sizeof(x) / sizeof(int); i++) {
		sum += *px;  // 배열의 각 요소 값을 합산
		px++;  // 포인터를 다음 요소로 이동
	}
	printf("다) sum = %d\n", sum);

		px = x;  // 다시 x 배열의 첫 번째 요소를 가리킴
	for (int i = 0; i < sizeof(x) / sizeof(int); i++) {
		*px = 100;  // 각 배열 요소를 100으로 변경
		px++;  // 포인터를 다음 요소로 이동
	}

	// 마)
	pc = c;  // c 배열의 첫 번째 요소를 가리킴
	for (int i = 0; i < sizeof(c) / sizeof(char); i++) {
		*pc = 'X';  // 각 배열 요소를 'X'로 변경
		pc++;  // 포인터를 다음 요소로 이동
	}
}