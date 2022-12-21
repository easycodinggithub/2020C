#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUM 20
int main() {
	int a[20] = { 35, 26, 48, 77, 56, 98, 75, 78, 99, 0, 43, 56, 67, 84, 99, 100, 45, 37, 49, 78 };
	
	int range, histo[11] = { 0, };

	for (int i = 0; i < NUM; i++)
	{	
		// 예외 처리

		/*range = a[i] / 10;
		if (range <= 0 || range > 10)
		{
			return 0;
		}*/

		range = 0;
		range = a[i] / 10;
		histo[range]++;
		//histo[a[i] / 10]++;
	}

	for (int j = 0; j < 10; j++)
	{
		printf("%3d : %3d \n", j * 10, histo[j]);
	}

	//// 활용 방안
	//int num;

	//int height[100];

	//scanf("%d", &num);

	//for (int i = 0; i < num; i++)
	//{
	//	scanf("%d", &height[i]);
	//}

	//int range, histo[11] = { 0, };

	//for (int i = 0; i < num; i++)
	//{	
	//	// 예외 처리

	//	/*range = a[i] / 10;
	//	if (range <= 0 || range > 10)
	//	{
	//		return 0;
	//	}*/

	//	range = 0;
	//	range = height[i] / 10;
	//	histo[range]++;
	//	//histo[a[i] / 10]++;
	//}

	//for (int j = 0; j < 10; j++)
	//{
	//	printf("%3d : %3d \n", j * 10, histo[j]);
	//}

	return 0;
}