#include <stdio.h>
int main() {

	int n;
	printf("수를 입력하세요 : ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("%d\n", i);
	}
	return 0;
	
}