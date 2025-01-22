#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_SET_SIZE 10
#define HAVE_ELEMENT 1
#define DO_NOT_HAVE_ELEMENT 0

// ���� �迭 �ʱ�ȭ
void initializeSet(int set[], int size) {
    for (int i = 0; i < size; i++) {
        set[i] = -1;  // -1�� �ʱ�ȭ�Ͽ� 0�� ��µ��� �ʵ���
    }
}

int hasElement(int set[], int size, int element)
{
    int i;
    for (i = 0; i < size; i++)
        if (set[i] == element)
            return HAVE_ELEMENT; // ã����! 
    return DO_NOT_HAVE_ELEMENT;
}

void printSet(int set[], int size)
{
    printf("{ ");
    for (int i = 0; i < size; i++) {
        if (set[i] != -1) { // -1�� �ƴ� ���� ���
            printf("%d", set[i]);
            if (i < size - 1 && set[i + 1] != -1) {
                printf(", ");  // ������ ���Ұ� �ƴ� ���� �޸� ���
            }
        }
    }
    printf(" }\n");
}

int addOneElement(int set[], int size, int element) {
    if (hasElement(set, size, element)) {
        printf("It is redundant. Please retry.\n");
        return size;
    }
    else {
        set[size] = element; // ���տ� ���� �߰� 
        size++;
    }
    return size;
}

/// ������ �Լ�
int setUnion(int set1[], int size1, int set2[], int size2, int setResult[]) {
    initializeSet(setResult, MAX_SET_SIZE * 2); // ��� ���� �ʱ�ȭ
    int sizeResult = size1; // �켱 set1�� ����� ����
    for (int i = 0; i < size1; i++) {
        setResult[i] = set1[i];
    }
    // set2�� ���Ҹ� setResult�� �߰� (�ߺ��� ���Ҵ� ����)
    for (int i = 0; i < size2; i++) {
        if (!hasElement(set1, size1, set2[i])) {
            setResult[sizeResult] = set2[i];
            sizeResult++;
        }
    }
    return sizeResult; // �������� ũ�� ����
}

// ������ �Լ�
int setIntersection(int set1[], int size1, int set2[], int size2, int setResult[]) {
    initializeSet(setResult, MAX_SET_SIZE); // ��� ���� �ʱ�ȭ
    int sizeResult = 0;
    for (int i = 0; i < size1; i++) {
        if (hasElement(set2, size2, set1[i])) {
            setResult[sizeResult] = set1[i];
            sizeResult++;
        }
    }
    return sizeResult; // �������� ũ�� ����
}

// ������ �Լ� (set1 - set2)
int setComplements(int set1[], int size1, int set2[], int size2, int setResult[]) {
    initializeSet(setResult, MAX_SET_SIZE); // ��� ���� �ʱ�ȭ
    int sizeResult = 0;
    for (int i = 0; i < size1; i++) {
        if (!hasElement(set2, size2, set1[i])) {
            setResult[sizeResult] = set1[i];
            sizeResult++;
        }
    }
    return sizeResult; // �������� ũ�� ����
}

int main() {
    int setA[MAX_SET_SIZE];
    int setB[MAX_SET_SIZE];
    int setC[MAX_SET_SIZE * 2];  // �������� ���� �迭�� ũ�⸦ 2���
    int sizeA = 0; // ���� A�� ũ�⸦ 0���� �ʱ�ȭ
    int sizeB = 0; // ���� B�� ũ�⸦ 0���� �ʱ�ȭ
    int sizeC;
    int i;
    int num1, num2;

    initializeSet(setA, MAX_SET_SIZE);  // setA �ʱ�ȭ
    initializeSet(setB, MAX_SET_SIZE);  // setB �ʱ�ȭ


    // Set A �Է�
    printf("Enter the size of Set A: ");
    scanf("%d", &sizeA);
    int originalSizeA = sizeA; // ���� �Է��� size ����
    for (i = 0; i < originalSizeA; i++) {
        printf("Enter the number for Set A <%d/%d>: ", i + 1, originalSizeA);
        scanf("%d", &num1);
        int newSizeA = addOneElement(setA, sizeA, num1); // ũ�⸦ ������ ��
        if (newSizeA != sizeA) {
            sizeA = newSizeA;
        }
        else {
            i--; // �ߺ��� ��� �ε����� ���ҽ��� ���Է��ϰ� ��
        }
    }

    // Set B �Է�
    printf("Enter the size of Set B: ");
    scanf("%d", &sizeB);
    int originalSizeB = sizeB; // ���� �Է��� size ����
    for (i = 0; i < originalSizeB; i++) {
        printf("Enter the number for Set B <%d/%d>: ", i + 1, originalSizeB);
        scanf("%d", &num2);
        int newSizeB = addOneElement(setB, sizeB, num2); // ũ�⸦ ������ ��
        if (newSizeB != sizeB) {
            sizeB = newSizeB;
        }
        else {
            i--; // �ߺ��� ��� �ε����� ���ҽ��� ���Է��ϰ� ��
        }
    }

    // Set A ���
    printf("Set A: \n");
    printSet(setA, sizeA);

    // Set B ���
    printf("Set B: \n");
    printSet(setB, sizeB);

    // ������ ���ϱ�
    sizeC = setUnion(setA, sizeA, setB, sizeB, setC);
    printf("Union of SetA and SetB: \n");
    printSet(setC, sizeC);

    // ������ ���ϱ�
    sizeC = setIntersection(setA, sizeA, setB, sizeB, setC);
    printf("Intersection of SetA and SetB: \n");
    printSet(setC, sizeC);

    // ������ ���ϱ� (SetA - SetB)
    sizeC = setComplements(setA, sizeA, setB, sizeB, setC);
    printf("Set-theoretic difference of SetA and SetB (SetA - SetB): \n");
    printSet(setC, sizeC);

    return 0;
}