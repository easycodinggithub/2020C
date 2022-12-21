#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define SIZE 100

// 배열의 크기 int arr[100][100]

int arr[SIZE][SIZE]; // arr[100][100]

void makearr(int);

// 달팽이 배열 만들기 함수

void printarr(int);

// 달팽이 배열 출력 함수

int main() {

	int n = 0;

	printf("달팽이 배열의 길이 : ");

	scanf("%d", &n);

	// 5 X 5, 10 X 10 등 배열의 크기

	makearr(n); // 달팽이 배열 만들기

	printarr(n);

	return 0;
}

void makearr(int n) {

	int cnt = 1; // 1, 2, 3, 4

	// 1 ~ 25 까지 단순히 증가하는 수 count

	int row = 0, col = -1;

	// row 세로 ( 1, 16, 15, 14, 13) , col 가로 ( 1, 2, 3, 4, 5 )

	// 왜 col 이 -1 인가?

	// 처음 시작이 [0][0] 인데 col += inc 에서 col 에 1이 저장됨으로 -1 + 1 = 0 임을 이용한다.

	// 처음 시작이 가로로 나감으로 row 를 0, col 을 -1로 한다.

	// 처음에 세로로 나가면 row 를 -1, col 을 0 으로 한다.

	int inc = 1; // 인덱스 증가 감소, 1, -1

	// ㄱ 자 형태의 부분은 가로 증가, 세로 증가이고

	// ㄴ 자 형태의 부분은 가로 감소, 세로 감소이다.

	// 가로 증가 -> 세로 증가 -> 가로 감소 -> 세로 감소

	while (n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			col += inc;
			arr[row][col] = cnt++;

			// 가로로 증가임으로 arr[row][col+=inc]
		}

		n--;

		// 달팽이 형태는 5 4 4 3 3 2 2 1 1 로 줄어들어야 한다.

		// 1   2  3  4 5
		// 16 17 18 19 6
		// 15 24 25 20 7
		// 14 23 22 21 8
		// 13 12 11 10 9

		// 즉 세로줄이 될 때 한개씩 줄어들어야 함으로 n-- 를 한다.

		if (n == 0) 
		{
			break;
		}

		for (int j = 0; j < n; j++)
		{
			row += inc;
			arr[row][col] = cnt++;

			// 세로로 증가임으로 arr[row+=inc][col]
		}

		inc *= -1; // 1 -> -1

		// 맨 처음에 가로, 세로 증가를 한번 하고, 그다음에는 1 * -1 로 가로, 세로 감소를 한다.

		// 다시 -1 * -1을 하면 가로, 세로 증가가 됨으로 계속 반복된다.
	}
}

void printarr(int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
}