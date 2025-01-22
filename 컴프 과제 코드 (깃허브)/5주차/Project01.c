#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_SET_SIZE 10
#define HAVE_ELEMENT 1
#define DO_NOT_HAVE_ELEMENT 0

// 집합 배열 초기화
void initializeSet(int set[], int size) {
    for (int i = 0; i < size; i++) {
        set[i] = -1;  // -1로 초기화하여 0이 출력되지 않도록
    }
}

int hasElement(int set[], int size, int element)
{
    int i;
    for (i = 0; i < size; i++)
        if (set[i] == element)
            return HAVE_ELEMENT; // 찾았음! 
    return DO_NOT_HAVE_ELEMENT;
}

void printSet(int set[], int size)
{
    printf("{ ");
    for (int i = 0; i < size; i++) {
        if (set[i] != -1) { // -1이 아닌 값만 출력
            printf("%d", set[i]);
            if (i < size - 1 && set[i + 1] != -1) {
                printf(", ");  // 마지막 원소가 아닐 때만 콤마 출력
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
        set[size] = element; // 집합에 원소 추가 
        size++;
    }
    return size;
}

/// 합집합 함수
int setUnion(int set1[], int size1, int set2[], int size2, int setResult[]) {
    initializeSet(setResult, MAX_SET_SIZE * 2); // 결과 집합 초기화
    int sizeResult = size1; // 우선 set1을 결과에 복사
    for (int i = 0; i < size1; i++) {
        setResult[i] = set1[i];
    }
    // set2의 원소를 setResult에 추가 (중복된 원소는 제외)
    for (int i = 0; i < size2; i++) {
        if (!hasElement(set1, size1, set2[i])) {
            setResult[sizeResult] = set2[i];
            sizeResult++;
        }
    }
    return sizeResult; // 합집합의 크기 리턴
}

// 교집합 함수
int setIntersection(int set1[], int size1, int set2[], int size2, int setResult[]) {
    initializeSet(setResult, MAX_SET_SIZE); // 결과 집합 초기화
    int sizeResult = 0;
    for (int i = 0; i < size1; i++) {
        if (hasElement(set2, size2, set1[i])) {
            setResult[sizeResult] = set1[i];
            sizeResult++;
        }
    }
    return sizeResult; // 교집합의 크기 리턴
}

// 차집합 함수 (set1 - set2)
int setComplements(int set1[], int size1, int set2[], int size2, int setResult[]) {
    initializeSet(setResult, MAX_SET_SIZE); // 결과 집합 초기화
    int sizeResult = 0;
    for (int i = 0; i < size1; i++) {
        if (!hasElement(set2, size2, set1[i])) {
            setResult[sizeResult] = set1[i];
            sizeResult++;
        }
    }
    return sizeResult; // 차집합의 크기 리턴
}

int main() {
    int setA[MAX_SET_SIZE];
    int setB[MAX_SET_SIZE];
    int setC[MAX_SET_SIZE * 2];  // 합집합을 위한 배열은 크기를 2배로
    int sizeA = 0; // 집합 A의 크기를 0으로 초기화
    int sizeB = 0; // 집합 B의 크기를 0으로 초기화
    int sizeC;
    int i;
    int num1, num2;

    initializeSet(setA, MAX_SET_SIZE);  // setA 초기화
    initializeSet(setB, MAX_SET_SIZE);  // setB 초기화


    // Set A 입력
    printf("Enter the size of Set A: ");
    scanf("%d", &sizeA);
    int originalSizeA = sizeA; // 최초 입력한 size 저장
    for (i = 0; i < originalSizeA; i++) {
        printf("Enter the number for Set A <%d/%d>: ", i + 1, originalSizeA);
        scanf("%d", &num1);
        int newSizeA = addOneElement(setA, sizeA, num1); // 크기를 갱신해 줌
        if (newSizeA != sizeA) {
            sizeA = newSizeA;
        }
        else {
            i--; // 중복일 경우 인덱스를 감소시켜 재입력하게 함
        }
    }

    // Set B 입력
    printf("Enter the size of Set B: ");
    scanf("%d", &sizeB);
    int originalSizeB = sizeB; // 최초 입력한 size 저장
    for (i = 0; i < originalSizeB; i++) {
        printf("Enter the number for Set B <%d/%d>: ", i + 1, originalSizeB);
        scanf("%d", &num2);
        int newSizeB = addOneElement(setB, sizeB, num2); // 크기를 갱신해 줌
        if (newSizeB != sizeB) {
            sizeB = newSizeB;
        }
        else {
            i--; // 중복일 경우 인덱스를 감소시켜 재입력하게 함
        }
    }

    // Set A 출력
    printf("Set A: \n");
    printSet(setA, sizeA);

    // Set B 출력
    printf("Set B: \n");
    printSet(setB, sizeB);

    // 합집합 구하기
    sizeC = setUnion(setA, sizeA, setB, sizeB, setC);
    printf("Union of SetA and SetB: \n");
    printSet(setC, sizeC);

    // 교집합 구하기
    sizeC = setIntersection(setA, sizeA, setB, sizeB, setC);
    printf("Intersection of SetA and SetB: \n");
    printSet(setC, sizeC);

    // 차집합 구하기 (SetA - SetB)
    sizeC = setComplements(setA, sizeA, setB, sizeB, setC);
    printf("Set-theoretic difference of SetA and SetB (SetA - SetB): \n");
    printSet(setC, sizeC);

    return 0;
}