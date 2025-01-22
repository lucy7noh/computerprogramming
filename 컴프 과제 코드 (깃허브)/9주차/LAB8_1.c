// LAB8_1 20230791 컴퓨터학과 노윤선
// 세 개 모두 포인터로 바꿔도 되고 s 하나만 포인터로 바꿔도 됨
#include <stdio.h>

void add_two(int x, int y, int *s)
{
	*s = x + y;
}
void main() {
	int a = 20, b = 30;
	int sum = 0;

	add_two(a, b, &sum);
	printf("a = %d b = %d sum = %d\n", a, b, sum);

}