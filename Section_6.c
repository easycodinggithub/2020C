#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	//int total_leg, total_head;

	//int rabbit_leg = 0, bird_leg = 0;

	//int rabbit = 1, bird = 1;

	//scanf("%d %d", &total_leg, &total_head);

	//while ((total_leg != rabbit_leg + bird_leg) && (total_head != rabbit_leg / 4 + bird_leg / 4))
	//{
	//	++rabbit_leg;
	//	++bird_leg;
	//	if ((total_leg == rabbit_leg + bird_leg) && (total_head == rabbit_leg / 4 + bird_leg / 4))
	//	{
	//		rabbit = rabbit_leg / 4;
	//		bird = bird_leg / 4;
	//	}
	//}

	///*for (int i = 1; i < head; i++)
	//{
	//	for (int j = 1; j < leg; j++)
	//	{
	//		if ((i * (2 * j)) % 2 == 0)
	//		{
	//			++bird;
	//		}
	//		 if ((i * j) % 4 == 0)
	//		{
	//			++rabbit;
	//		}
	//	}
	//}*/

	//printf("%d %d", rabbit, bird);

	//int a, b;

	//int rabbit = 0, bird = 0;

	//scanf("%d %d", &a, &b);

	//for (int i = 1; i <= a; i++)
	//{
	//	for (int j = 1; j < b; j++)
	//	{
	//		if ((i * j) % 2 == 0 && i * j == 2)
	//		{
	//			++rabbit;
	//		}else if ((i * j) % 4 == 0 && i * j == 4)
	//		{
	//			++rabbit;
	//		}
	//	}
	//}

	//printf("%d %d", rabbit, bird);

	/*int head, leg;

	scanf("%d %d", &leg, &head);

	printf("%d %d", (leg / 2) - head, head * 2 - (leg / 2));*/

	int head, leg;

	scanf("%d %d", &leg, &head);

	for (int i = 1; i < head; i++)
	{
		for (int j = 1; j < head; j++)
		{
			if (2 * i + 4 * j == leg)
			{
				printf("%d %d \n", i, j);
				break;
			}
		}
	}

	return 0;
}