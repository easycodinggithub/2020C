#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	switch (n)
	{
	case 1:
		printf("ÀÛÀº ÁÖ¸Ô\n");
		//break;
	case 2:
		printf("Å« ÁÖ¸Ô\n");
		//break;
	case 3:
		printf("ÀÛÀº ¹ß\n");
		//break;
	case 4:
		printf("Å« ¹ß\n");
		//break;
	default:
		printf("½Â·æ±Å~~¾ğ");
	}
}