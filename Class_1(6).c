#include <stdio.h>
int main1() {
	int count = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 5 == 0 || i % 7 == 0) {
			printf("%4d", i);
			++count;
		}

		if (count == 5) {
			printf("\n");
			count = 0;
		}
	}
}