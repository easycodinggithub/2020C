#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	int n;

	printf("1~5 ������ ���� �Է��ϼ��� : ");

	scanf("%d", &n);

	switch (n)
	{
	case 1:
		printf("1�Դϴ�.");
		break;
	case 2:
		printf("2�Դϴ�.");
		break;
	case 3:
		printf("3�Դϴ�.");
		break;
	case 4:
		printf("4�Դϴ�.");
		break;
	case 5:
		printf("5�Դϴ�.");
		break;
	default:
		printf("���̿��� �����Դϴ�.");
		break;
	}

	return 0;
}
