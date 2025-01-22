//LAB11_0 20230791 컴퓨터학과 노윤선
#include <stdio.h>
int main(void)
{
	struct foo_t {
		int x; //4bytes
		int y; //4..
		char c; //1byte
		char c2; //1..
		 //padding 2bytes
	};
	/*
	struct foo_t {
    char c;   // 1 byte
              // padding (3 bytes)
    int x;    // 4 bytes
    char c2;  // 1 byte
              // padding (3 bytes)
    int y;    // 4 bytes
};
	정렬 규칙에 따라 다음 int와의 간격이 4의 배수가 돼야함.
	*/
	struct foo_t data;
	struct foo_t* ptr = &data, * ptr2;
	ptr2 = ptr;
	ptr2++; //포인터를 다음 구조체로 이동 (구조체크기(12)만큼 이동)
	// 나)
	printf("sizeof data is = %d\n", sizeof(data)); //a)
	printf("data의 첫 주소값은 %d\n", &data); //b)
	printf("data.x 첫 주소값은 %d\n", &data.x); //c)
	printf("ptr이 가르키는 주소값은 %d\n", ptr); //d) 구조체의 시작 주소
	printf("ptr2가 가르키는 주소값은 %d\n", ptr2);//e)ptr + 12 값을 가짐
	return;
}