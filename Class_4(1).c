#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main_4() {

	int opt;

	double num1, num2, result = 0;

	printf("1.µ¡¼À 2.»¬¼À 3.°ö¼À 4.³ª´°¼À \n");

	printf("¼±ÅÃ?");

	scanf("%d", &opt);

	printf("½Ç¼ö 2°³¸¦ ÀÔ·ÂÇÏ½Ã¿À \n");

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