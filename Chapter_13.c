#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void BubbleSort(int arr[], int len);

// 버블 정렬 함수

int main() {

	int arr[5] = { 4, 6, 1, 3, 9 };

	// 정렬할 숫자들의 배열

	/*printf("%d", arr);*/

	BubbleSort(arr, 5);

	// 첫 번째 인자로 배열의 주소 전달, 두 번째 인자로 배열의 크기 전달 ( 5 )

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}

	// 정렬된 값 출력

	return 0;
}

void BubbleSort(int* arr, int len) {

	// int* arr = int arr[]

	int temp;

	// swap 시 필요한 임시 변수

	for (int i = 0; i < len - 1; i++)
	{
		// len 이 5이면 총 0, 1, 2, 3 까지 돈다.

		for (int j = 0; j < len - i - 1; j++)
		{
			// len - 1 과 len - i - 1 이 다른점

			// 효율성의 차이

			// len - 1은 총 16번 비교를 하지만 

			// len - i - 1 은 0, 1, 2, 3 -> 0, 1, 2 -> 0, 1 -> 0 으로 총 10번 비교를 한다.

			if (arr[j] > arr[j + 1])
			{
				// 오름차순 정렬

				temp = arr[j];

				// 임시 변수에 현재 배열을 저장

				arr[j] = arr[j + 1];

				// 그냥 arr[j] 를 arr[j + 1]에 넣으면 arr[j + 1]이 삭제됨으로 arr[j] 값으로 이동

				// arr[j] 는 temp에 저장되있어 상관이 없다.

				arr[j + 1] = temp;

				// temp ( arr[j] ) 을 arr[j + 1] 로 이동
			}
			/*if (arr[j] < arr[j + 1])
			{

				// 내림차순 정렬

				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}*/
		}
	}
}