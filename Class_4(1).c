#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main_4() {

	int opt;

	double num1, num2, result = 0;

	printf("1.���� 2.���� 3.���� 4.������ \n");

	printf("����?");

	scanf("%d", &opt);

	printf("�Ǽ� 2���� �Է��Ͻÿ� \n");

	scanf("%lf %lf", &num1, &num2);

	if (opt == 1) {

		result = num1 + num2;

	}
	else if (opt == 2)
	{
		result = num1 - num2;

	}
	else if (opt == 3) {
		result = num1 * num2;

	}else {
		result = num1 / num2;

	}

}