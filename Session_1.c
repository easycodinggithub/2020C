#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int func(int n) {
	static int a = 0;

	// static �̶� ? ���� ���������� ��������ó�� ����ϴ� ������, �ʱ�ȭ�� �� ���� �ȴٴ� Ư¡�� �ִ�.

	// �ٸ� ���� ������ �޸� main �Լ������� ������ �ȵȴ�. ( �Լ� �ȿ����� ��밡�� )

	a++;
	printf("a=%d, n=%d\n", a, n);
	return 0;
}
int main() {
	func(5);
	func(5);
}