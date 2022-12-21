#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Maxnum(int, int, int);
int Minnum(int, int, int);
int main() {
	int num_1, num_2, num_3;
	scanf("%d %d %d", &num_1, &num_2, &num_3);
	printf("MAX : %d \n", Maxnum(num_1, num_2, num_3));
	printf("MIN : %d \n", Minnum(num_1, num_2, num_3));
	return 0;
}
int Maxnum(int num_1, int num_2, int num_3) {
	int max = 0;
	/*if (num_1 > num_2 && num_1 > num_3)
	{
		max = num_1;
	}
	else if (num_2 > num_1 && num_2 > num_3)
	{
		max = num_2;
	}
	else {
		max = num_3;
	}
	return max;*/
	max = (num_1 > num_2) ? num_1 : num_2;
	return (max > num_3) ? max : num_3;
}
int Minnum(int num_1, int num_2, int num_3) {
	int min = 0;
	/*if (num_1 < num_2 && num_1 < num_3)
	{
		min = num_1;
	}
	else if (num_2 < num_1 && num_2 < num_3)
	{
		min = num_2;
	}
	else {
		min = num_3;
	}
	return min;*/
	min = (num_1 < num_2) ? num_1 : num_2;
	return (min < num_3) ? min : num_3;
}

