#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char day;
	printf("M : morning, A : afternoon, E : evening\n");
	while (1)
	{
		printf("ют╥б : ");
		scanf(" %c", &day);
		switch (day)
		{
		case 'M':
		case 'm':
			printf("Good Morning\n");
			break;
		case 'A':
		case 'a':
			printf("Good Afternoon\n");
			break;
		case 'E':
		case 'e':
			printf("Good Evening\n");
			break;
		default:
			printf("Good Night\n");
			break;
		}
		if (day == 'x') {
			break;
		}
		{

		}
	}
}