//project4_0 20230791 컴퓨터학과 노윤선
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdio.h>
#define NUM_OF_MEMBERS 5

void print_links(int data[][NUM_OF_MEMBERS]) {
    for (int i = 0; i < NUM_OF_MEMBERS; i++) {
        for (int j = 0; j < NUM_OF_MEMBERS; j++) {
            printf("%d ", data[i][j]);
        }
        printf("\n");
    }
}

void matrix_multiplication(int data[][NUM_OF_MEMBERS], int result[][NUM_OF_MEMBERS]) {
    for (int i = 0; i < NUM_OF_MEMBERS; i++) {
        for (int j = 0; j < NUM_OF_MEMBERS; j++) {
            for (int k = 0; k < NUM_OF_MEMBERS; k++) {
                // AND 연산 후 OR 연산 수행
                result[i][j] |= (data[i][k] && data[k][j]);
            }
        }
    }
}

int main(void) {
    int link_data[NUM_OF_MEMBERS][NUM_OF_MEMBERS] = {
        {1, 1, 0, 0, 0},  // 0과 1이 1촌
        {1, 1, 1, 0, 0},  // 1과 2가 1촌
        {0, 1, 1, 0, 1},  // 2와 4가 1촌
        {0, 0, 0, 1, 1},  // 3과 4가 1촌
        {0, 0, 1, 1, 1}   // 4와 2, 3이 1촌
    };

    int link_result[NUM_OF_MEMBERS][NUM_OF_MEMBERS] = { 0 };

    printf("=================================================================\n");
    printf("Friends matrix\n");
    printf("=================================================================\n");
    print_links(link_data); // 최초 1촌 관계 출력

    matrix_multiplication(link_data, link_result); // 2촌 관계 계산

    printf("=================================================================\n");
    printf("Friends of friends matrix\n");
    printf("=================================================================\n");
    print_links(link_result); // 2촌까지의 관계 출력

    return 0;
}