#pragma warning(disable : 4996)
#include <stdio.h>
void recur(int);
int main() {
	recur(5);
	return 0;
}
void recur(int n) {
	if (n < 0)
	{
		return;
	}
		printf("�Լ��ȿ� �Լ� ȣ�� : %d\n", n);
		recur(n - 1);
}