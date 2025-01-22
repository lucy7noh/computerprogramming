//LABHW3_5 20230791 컴퓨터학전공 노윤선
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int list[], int size);

int main() {
    int data[10];
    srand(time(NULL));

    printf("발생된 난수:\t ");

    for(int i = 0; i < 10; i++) {
        data[i] = rand() % 100;// 0 이상 100 미만의 난수 발생
        printf("%d ", data[i]);

    }
    selectionSort(data, 10);

    printf("\n정렬 후: \t");
    for (int i = 0; i < 10; i++) {
        printf("%d ", data[i]);
    }

    printf("\n");
    return 0;
}

void selectionSort(int list[], int size) {
    int minIndex, temp;

    for (int i = 0; i < size - 1; i++) {
        minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (list[j] < list[minIndex])
                minIndex = j;
        }
        temp = list[i];
        list[i] = list[minIndex];
        list[minIndex] = temp;
    }
    
}