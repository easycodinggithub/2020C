#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i, sum = 0;

	while (1) {

		printf("���ڸ� �Է��ϼ��� : \n");
		printf("0 �Է½� ���� : ");

		scanf("%d", &i);

		if (i == 0) {
			break;
		}

		sum += i;
	}

	printf("���� : %d", sum);

	return 0;
}