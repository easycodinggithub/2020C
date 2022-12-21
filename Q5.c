#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	double yard;

	printf("yard? ");

	scanf("%lf", &yard);

	printf("%.1lfyard = %.1lfcm", yard, yard * 91.44);

	return 0;
}