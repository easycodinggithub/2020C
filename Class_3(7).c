#include <stdio.h>
int main() {

	int n;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &n);

	for (int i = 1; i < 10; i++)
	{
		printf("%d X %d = %d \n", n, i, n * i);
	}
	return 0;

}