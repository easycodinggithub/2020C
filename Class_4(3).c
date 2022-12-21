#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main_4() {
	
	for (int i = 1; i <= 50; i++)
	{
		if (i % 2 == 0 || i % 3 == 0) {
			continue;
		}
		printf("%d ", i);
	}

	return 0;
}
