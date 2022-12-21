#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

	int Count, Human, Computer, Win = 0, Same = 0, Lose = 0;

	srand((unsigned int)time(NULL));

	printf("가위바위보 게임을 몇 번 실행하시겠습니까?");

	scanf("%d", &Count);

	for (int i = 0; i < Count; i++)
	{
		printf("(1:가위, 2:바위,3:보) : ");

		scanf("%d", &Human);

		Computer = rand() % 3 + 1;

		printf("%d %d \n", Human, Computer);

		if (Human - Computer == 1 || Human - Computer == -2)
		{
			Win++;
			printf("당신이 이겼습니다. (%d승 %d무 %d패) \n", Win, Same, Lose);
		}
		else if (Human - Computer == -1 || Human - Computer == 2)
		{
			Lose++;
			printf("당신이 졌습니다. (%d승 %d무 %d패) \n", Win, Same, Lose);
		}
		else {
			Same++;
			printf("비겼습니다. (%d승 %d무 %d패) \n", Win, Same, Lose);
		}
	}

	printf("게임을 종료합니다.");
	return 0;
}