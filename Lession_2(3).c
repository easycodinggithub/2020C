#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char dir;
	while (1)
	{
		scanf(" %c", &dir);
		switch (dir)
		{
		case 'w':
			printf("���� �̵�\n");
			break;
		case 'a':
			printf("���� �̵�\n");
			break;
		case 's':
			printf("�Ʒ� �̵�\n");
			break;
		case 'd':
			printf("������ �̵�\n");
			break;
		default:
			printf("�·��~~��\n");
		}
		if (dir == 'x') {
			break;
		}
		{

		}
	}
}