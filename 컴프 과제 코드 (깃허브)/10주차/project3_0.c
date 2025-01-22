//Project3_0 20230791 컴퓨터학과 노윤선
#define _CRT_SECURE_NO_WARNINGS
#define MAX_VIDEO 100
#define MAX_CHAR 100 // 문자열의 max 문자
#include <stdio.h>
#include <string.h>
struct VideoInfo { // 재고 대장: 현재 보유하고 있는 Video 정보 저장
	char title[MAX_CHAR];
	int qty; // 수량
};

int main(void)
{
	int videoCount = 5;
	struct VideoInfo videoList[MAX_VIDEO] = { {"BeforeSunrise", 1}, {"BeforeSunset", 3}, {"BeforeMidnight", 5}, {"Casablanca", 7}, {"EdgeOfTomorrow", 9} }; // 앞의 정보처럼 초기화

	char title[MAX_CHAR]; //영화 제목 입력 
	int qty; //입력할 영화의 수량
	// 필요한 변수 추가
	int choice;
	int i;

	printf("1(All Video 출력), 2(구입), 3(검색), 4(종료): ");
	scanf("%d", &choice);
	while (choice != 4) {
		switch (choice) {
		case 1: // 보유 Video들을 출력
			printf("Video 제목\t 수량\n");
			printf("-----------------------\n");
			// 구현
			for (i = 0; i < videoCount; i++) {
				printf("%s\t%d\n", videoList[i].title, videoList[i].qty);
			}

			break;
		case 2: // Video 구입
			printf("Enter video 제목: ");
			scanf("%s", title); //제목 입력
			printf("Enter video 수량: ");
			scanf("%d", &qty); //수량 입력 
			// 구현
			// 이미 존재하는 비디오인지 확인
			for (i = 0; i < videoCount; i++) {
				if (strcmp(videoList[i].title, title) == 0) { //문자열 비교 같으면0, 다르면 1
					videoList[i].qty += qty; //수량을 추가한다
					break;
				}
			}

			// 새로운 비디오(1이 나왔을 경우)
			if (i == videoCount && videoCount < MAX_VIDEO) {
				strcpy(videoList[videoCount].title, title); //마지막원소배열에 제목을 복사한다
				videoList[videoCount].qty = qty; //마지막원소의 수량은 방금 입력한 수량
				videoCount++; //한 자리 늘려줌
			}

			// 업데이트된 비디오 리스트 출력
			printf("Video 제목\t수량\n");
			printf("-----------------------\n");
			for (i = 0; i < videoCount; i++) { //늘어난  count가 for문에 작성된다
				printf("%s\t%d\n", videoList[i].title, videoList[i].qty);
			}
			break;

		case 3: // title 로 Video 찾기
			printf("Enter video 제목: ");
			scanf("%s", title); //제목 입력
			//구현
			for (i = 0; i < videoCount; i++) {
				if (strcmp(videoList[i].title, title) == 0) {
					printf("대여 가능합니다.\n");
					break;
				}
			}
			if (i == videoCount) {
				printf("그런 비디오는 없습니다.\n");
			}
			break;
		}
		printf("1(All Video 출력), 2(구입), 3(검색), 4(종료): ");
		scanf("%d", &choice);
	}
}