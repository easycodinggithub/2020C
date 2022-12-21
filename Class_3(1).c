#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i, sum = 0;

	while (1) {

		printf("숫자를 입력하세요 : \n");
		printf("0 입력시 종료 : ");

		scanf("%d", &i);

		if (i == 0) {
			break;
		}

		sum += i;
	}

	printf("총합 : %d", sum);

	return 0;
}