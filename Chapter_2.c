#include <stdio.h>
int main() {
	int score, pass;
	printf("점수를 입력하세요: ");
	scanf_s("%d", &score);
	printf("합격점을 입력하세요: ");
	scanf_s("%d", &pass);
	score >= pass ? printf("합격\n") : printf("불합격\n");
	return 0;
}