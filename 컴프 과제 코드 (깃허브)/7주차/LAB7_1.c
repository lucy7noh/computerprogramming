#include <stdio.h>
int main(void)
{
	int x[] = { 0, 0, 1, 2, 3 };
	char c[] = "BBCDE";
	double f = 2.3;
	int i, sum = 0;
	// ��)
	//������ ���� 
	int * px;
	int * pc;
	int * pd;

	px = x;
	pc = c;
	pd = &f;

	printf("��-1) %d %c %.1f\n", x[0], c[0], f);
	printf("��-2) %d %c %.1f\n", *px, *pc, *pd);
		
	// ��) 
	*px = -1;   // x[0]�� -1�� ����
	*pc = 'A';  // c[0]�� 'A'�� ����
	*pd = 5.7;  // f ���� 5.7�� ����

	// ����� �� ���
	printf("��) %d %c %.1f\n", *px, *pc, *pd);


	// ��) �����͸� �̿��Ͽ� x �迭�� ��� ��Ҹ� �ջ��Ͽ� sum�� ����
	px = x;  // �ٽ� x �迭�� ù ��° ��Ҹ� ����Ŵ
	for (int i = 0; i < sizeof(x) / sizeof(int); i++) {
		sum += *px;  // �迭�� �� ��� ���� �ջ�
		px++;  // �����͸� ���� ��ҷ� �̵�
	}
	printf("��) sum = %d\n", sum);

		px = x;  // �ٽ� x �迭�� ù ��° ��Ҹ� ����Ŵ
	for (int i = 0; i < sizeof(x) / sizeof(int); i++) {
		*px = 100;  // �� �迭 ��Ҹ� 100���� ����
		px++;  // �����͸� ���� ��ҷ� �̵�
	}

	// ��)
	pc = c;  // c �迭�� ù ��° ��Ҹ� ����Ŵ
	for (int i = 0; i < sizeof(c) / sizeof(char); i++) {
		*pc = 'X';  // �� �迭 ��Ҹ� 'X'�� ����
		pc++;  // �����͸� ���� ��ҷ� �̵�
	}
}