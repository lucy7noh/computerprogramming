//LAB11_0 20230791 ��ǻ���а� ������
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
	���� ��Ģ�� ���� ���� int���� ������ 4�� ����� �ž���.
	*/
	struct foo_t data;
	struct foo_t* ptr = &data, * ptr2;
	ptr2 = ptr;
	ptr2++; //�����͸� ���� ����ü�� �̵� (����üũ��(12)��ŭ �̵�)
	// ��)
	printf("sizeof data is = %d\n", sizeof(data)); //a)
	printf("data�� ù �ּҰ��� %d\n", &data); //b)
	printf("data.x ù �ּҰ��� %d\n", &data.x); //c)
	printf("ptr�� ����Ű�� �ּҰ��� %d\n", ptr); //d) ����ü�� ���� �ּ�
	printf("ptr2�� ����Ű�� �ּҰ��� %d\n", ptr2);//e)ptr + 12 ���� ����
	return;
}