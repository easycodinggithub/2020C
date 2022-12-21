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
			printf("위로 이동\n");
			break;
		case 'a':
			printf("왼쪽 이동\n");
			break;
		case 's':
			printf("아래 이동\n");
			break;
		case 'd':
			printf("오른쪽 이동\n");
			break;
		default:
			printf("승룡궈~~언\n");
		}
		if (dir == 'x') {
			break;
		}
		{

		}
	}
}