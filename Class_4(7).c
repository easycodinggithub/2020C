#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	int num_1, num_2;

	scanf("%d %d", &num_1, &num_2);

	printf("%d %d \n", ++num_1, num_2-- );
	printf("%d %d \n", num_1, num_2);

	return 0;
}