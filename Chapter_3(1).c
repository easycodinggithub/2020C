#include <stdio.h>
int main() {
	int a;
	scanf_s("%d", &a);
	switch (a)
	{
	case 1:
		printf("1st");
		break;
	case 2:
		printf("2st");
		break;
	case 3:
		printf("3st");
		break;
	default:
		printf("%dth", a);
		break;
	}
	return 0;
}