//project01 20230791 컴퓨터학과 노윤선
#define MAX_SET_SIZE 10 
#define HAVE_ELEMENT 1 
#define DO_NOT_HAVE_ELEMENT 0 
#include <stdio.h> 
// set에 element가 있으면 1을 없으면 0을 반환한다 
int hasElement(int set[], int size, int element)
{
   int i;
   for (i = 0; i < size; i++)
      if (set[i] == element)
         return HAVE_ELEMENT; // we found it! 
   return DO_NOT_HAVE_ELEMENT;
}

void printSet(int set[], int size)
{
   printf("{ ");
   for (int i = 0; i < size; i++) {
      printf("%d", set[i]);
      if (i < size - 1) {
         printf(", ");  // 마지막 원소가 아닐 때만 콤마 출력
      }
   }
   printf(" }\n");
}

// set1과 set2가 같으면 1을, 다르면 0을 반환 (순서 상관없이 원소 비교)
int isSetEqual(int set1[], int size1, int set2[], int size2)
{
    if (size1 != size2)
        return 0; // 크기가 다르면 집합이 다르다.

    for (int i = 0; i < size1; i++) {
        if (!hasElement(set2, size2, set1[i])) {
            return 0; // set1의 원소가 set2에 없으면 집합이 다르다.
        }
    }

    for (int i = 0; i < size2; i++) {
        if (!hasElement(set1, size1, set2[i])) {
            return 0; // set2의 원소가 set1에 없으면 집합이 다르다.
        }
    }

    return 1; // 모든 원소가 두 집합에 존재하면 집합이 같다.
}

// 원소가 집합에 존재하지 않으면 추가, 이미 존재하면 redundant라고 출력하고 현재 집합 크기를 반환 
int addOneElement(int set[], int size, int element)
{
   if (hasElement(set, size, element)) {
      printf("It is redundant. Please retry.\n");
      return size;
   }
   else {
      set[size] = element; //집합에 원소 추가 
      size++;
   }
   return size;
}

int main(void)
{
   int setA[MAX_SET_SIZE] = { 1, 2, 3 };
   int setB[MAX_SET_SIZE] = { 3, 2, 1, 4 };
   int num;
   int sizeA = 3, sizeB = 4;
   
   printf("A:"); printSet(setA, sizeA);
   printf("B:"); printSet(setB, sizeB);
   
   if (isSetEqual(setA, sizeA, setB, sizeB))
      printf("집합 A와 B는 같다\n");
   else
      printf("집합 A와 B는 다르다\n\n");
   
   printf("A 에 3을 추가하면\n");
   sizeA = addOneElement(setA, sizeA, 3); // 3을 SetA에 추가한다 
   printf("집합 A:"); printSet(setA, sizeA);
   
   printf("A 에 4를 추가하면\n");
   sizeA = addOneElement(setA, sizeA, 4); // 4를 SetA에 추가한다 
   printf("집합 A:"); printSet(setA, sizeA);
   
   if (isSetEqual(setA, sizeA, setB, sizeB))
      printf("집합 A와 B는 같다\n");
   else
      printf("집합 A와 B는 다르다\n");
}