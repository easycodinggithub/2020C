#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	int n;

	printf("1~5 사이의 수를 입력하세요 : ");

	scanf("%d", &n);

	switch (n)
	{
	case 1:
		printf("1입니다.");
		break;
	case 2:
		printf("2입니다.");
		break;
	case 3:
		printf("3입니다.");
		break;
	case 4:
		printf("4입니다.");
		break;
	case 5:
		printf("5입니다.");
		break;
	default:
		printf("그이외의 숫자입니다.");
		break;
	}

	return 0;
}
