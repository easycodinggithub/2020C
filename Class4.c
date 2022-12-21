#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	int age;

	printf("³ªÀÌ : ");

	scanf("%d", &age);

	if (age >= 20) {
		printf("adult");
	}
	else {
		printf("%d years later", 20 - age);
	}

	return 0;
}