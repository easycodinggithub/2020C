#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUM 20
int main() {

	// 왜 이중 for 문이 아닌 for 문 2개로 만들까?

	// 이중 for 문은 시간 복잡도가 높기 떄문이다.

	// 즉 효율적이지가 않다.

	// 이중 for 문으로 100 개의 순서를 구할려면 100 * 100 = 10000

	// for 문 2개를 쓰면 100 + 100 = 200 이기 때문이다.

	int scores[10] = { 95, 64, 78, 94, 65, 71, 72, 59, 45, 78 };

	// 각 학생들의 성적

	int rank[102] = { 0, };

	// 등수를 표현할 배열 선언 0 - 101

	// rank[102] 는 null 값임으로
	
	// 100 까지가 아닌 101 까지 하는 이유는?

	// rank[100 + 1] 로 사용을 해서 자신보다 1칸 앞의 배열을 1로 두어야 모든 수가 등수로 전달되기 떄문이다.

	for (int i = 0; i < 10; i++)
	{
		// 0 - 9 까지 10번 for 문을 돌림 -> 1등부터 10등까지

		rank[scores[i]]++;

		// rank[scores[i]]++ 는 range = scores[i]; rank[range]++; 와 같다.

		// 만약 i 가 0, scores 가 95 임으로 rank[95] 가 1 이 증가한다.
	}

	rank[101] = 1;

	// rank[101] 을 1로 정의하는 이유?

	// 0으로 정의해도 되지만 0순위가 아닌 1순위부터 나타내야 함으로 1 로 정의한다.

	for (int j = 100; j >= 0; j--)
	{
		// 100 부터 0 까지 -> 100 번 돌림 -> rank 배열 모두 돌림

		rank[j] = rank[j] + rank[j + 1];

		// rank[i] 값에 자신과 자신 + 1 값을 더함

		// 중요!!! rank[102] 로 해야하는 이유이기도 하다.

		// 이렇게 하면 rank[100] 의 값이 계속 더해져 내려와 결국 rank[100]에서 rank[0]에 가까워 질수록 등수가 내려간다.

		// rank[100] 이 1등, rank[0] 이 10등 
	}

	printf("학번  점수  등수 \n");
	for (int i = 0; i < 10; i++)
	{
		printf("%3d %5d %3d \n", i + 1, scores[i], rank[scores[i] + 1]);

		// scores[i] 에 1 을 더하는 이유?
		
		// rank 배열은 시작이 0 임으로
	}

	/*int scores[10] = { 8, 4, 7, 9, 1, 2, 5, 3, 6, 10 };

	int rank[12] = { 0, };

	for (int i = 0; i < 10; i++)
	{
		rank[scores[i]]++;
		rank[11] = 1;
	}
	for (int j = 10; j >= 0; j--)
	{
		rank[j] = rank[j] + rank[j + 1];
	}

	printf("학번  점수  등수 \n");
	for (int i = 0; i < 10; i++)
	{
		printf("%3d %5d %3d \n", i + 1, scores[i], rank[scores[i] + 1]);
	}*/

	return 0;
}