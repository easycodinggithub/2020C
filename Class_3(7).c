#include <stdio.h>
int main() {

	int n;
	printf("단을 입력하세요 : ");
	scanf_s("%d", &n);

	for (int i = 1; i < 10; i++)
	{
		printf("%d X %d = %d \n", n, i, n * i);
	}
	return 0;

}