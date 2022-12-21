#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 대소고 학년별 성적관리 프로그램
typedef struct Student_Score SS;

struct Student_Score {
	char name[30]; // 학생 이름
	int score; // 학생 성적
	char grade; // 학생 등급
	int count; // 한학년 총명
	int sum; // 학년 전체 점수
	int avg; // 학년 평균
};

int main() {

	SS inform[100]; // 목록 선언

	SS inform_2[3]; // 목록 선언

	for (int i = 0; i < 3; i++)
	{
		inform_2[i].sum = 0;
		inform_2[i].avg = 0;

		printf("%d 학년의 총 인원 : ", i + 1);

		scanf("%d", &inform_2[i].count);

		for (int j = 0; j < inform_2[i].count; j++)
		{
			printf("%d 학년 %d 번 학생의 이름 : ", i + 1, j + 1);

			scanf("%s", &inform[j].name);

			printf("%d 학년 %d 번 학생의 성적 : ", i + 1, j + 1);

			scanf("%d", &inform[j].score);

			printf("%d 학년 %d 번 학생의 등급 : ", i + 1, j + 1);

			scanf(" %c", &inform[j].grade);

			inform_2[i].sum += inform[j].score;
		}

		inform_2[i].avg = inform_2[i].sum / inform_2[i].count;
	}

	for (int i = 0; i < 3; i++)
	{
		printf("%d 학년의 총 인원 : %d \n", i + 1, inform_2[i].count);

		for (int j = 0; j < inform_2[i].count; j++)
		{
			printf("%d 학년 %d 번 학생의 이름 : %s \n", i + 1, j + 1, inform[j].name);

			printf("%d 학년 %d 번 학생의 성적 : %d \n", i + 1, j + 1, inform[j].score);

			printf("%d 학년 %d 번 학생의 등급 : %c \n", i + 1, j + 1, inform[j].grade);
		}

		printf("%d 학년의 총 점수 : %d \n", i + 1, inform_2[i].sum);
		printf("%d 학년의 평균 점수 : %d \n", i + 1, inform_2[i].avg);
	}

	return 0;
}