#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	int n1 = 100; 
	int* p;
	p = &n1; // �ּҿ� �ּ� ����
	printf("�ּ�(Address) : %p, %p \n", p, &n1);
	printf("����, �� : %d, %d \n", *p, n1);
	for (int i = 0; i < 5; i++)
	{
		printf("%4d", (*p)++);

		// *p++ VS (*p)++
		// *p++ �� p++ �� *�� ����
		// (*p)++ �� *p �� ++ �� ��

		printf("%d \n", n1);
	}

	return 0;
}