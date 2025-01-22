#include <stdio.h>
int main(void)
{
	char c = 'A';
	int n = 100;
	double d = 3.14;
	char* pC;
	int* pN;
	double* pD;
	pC = &c;
	pN = &n;
	pD = &d;
	
	*pC = 'Z';
	*pN = 199;
	*pD = 3.1415;
	pC++;
	pN++;
	pD++;
	
	pC = pC + 2;
	pN = pN + 2;
	pD = pD + 2;
	
}