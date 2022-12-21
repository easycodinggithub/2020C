#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void selectionSort(int*, int);

// 선택 정렬 함수 선언

void printArr(int*, int);

// 배열 출력

int main() {
	int value[] = { 4, 7, 9, 11, 3, 7, 6 };

	// 정렬할 배열

	int n = sizeof(value) / sizeof(int);

	// int value[7] 임으로 7 * 4 = 28

	// int 의 사이즈는 4임으로
	
	// 28 / 4 = 7 

	printArr(value, n);
	
	// 정렬되지 않은 배열 출력

	selectionSort(value, n);
	
	// 배열 정렬

	printArr(value, n);

	// 정렬된 배열 출력

	return 0;
}

void selectionSort(int* value, int n){

	int min = 0, temp = 0;

	for (int i = 0; i < n - 1; i++)
	{
		// n - 1을 왜 할까?

		// 2와 3을 비교할때는 1번만 비교한다.

		// 1 혼자를 비교할 때는 0번 비교한다.

		// 4, 7, 9, 11, 3, 7, 6 를 비교 하려면 6번 즉 0 ~ 5까지

		min = i;

		// 0, 1, 2, 3, 4, 5 순으로 증가

		for (int j = i + 1; j < n; j++)
		{
			if (value[min] > value[j])
			{
				// 기준 숫자가 나머지 값중 하나보다 크다면

				min = j;

				// 기준 숫자보다 작은 j 가 min 이 된다.
			}
		}

		temp = value[i];
		value[i] = value[min];
		value[min] = temp;

		// 기준 숫자랑 min 숫자랑 교환
	}
}

void printArr(int* value, int n) {
	for (int i = 0; i < n; i++)
	{
		printf("%3d", value[i]);
	}
	printf("\n");
}

// 선택 정렬 VS 버블 정렬

// 선택정렬은 1, 2, 3 을 비교할 때 1 VS 2, 1 VS 3, 2 VS 3 으로 비교한다.

// 버블정렬은 1, 2, 3 을 비교할 때 1 VS 2, 2 VS 3, 1 VS 2 으로 비교한다.
