#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

	srand((unsigned int)time(NULL));

	int Dice_1, Dice_2, Sum = 0;

	char Start;

	while (1)
	{
		printf("주사위 게임을 하시겠습니까? (y/n) \n");

		scanf(" %c", &Start);

		if (Start == 'n' || Start == 'N')
		{
			exit(0);
		}
		else if (Start == 'y' || Start == 'Y')
		{

			while (1)
			{

				printf("주사위 : ");

				Dice_1 = rand() % 6 + 1;

				Dice_2 = rand() % 6 + 1;

				printf("%d %d \n", Dice_1, Dice_2);

				Sum += Dice_1 + Dice_2;

				if (Dice_1 == Dice_2)
				{
					printf("더블입니다. \n");
					continue;
				}
					printf("%d칸 전진하세요. \n", Sum);
					Sum = 0;
					break;
			}

		}else {
			printf("(y/n)를 입력해 주세요. \n");
		}
	}

	return 0;
}