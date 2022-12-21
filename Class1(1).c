#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	int score;

	char grade = 'A';

	scanf("%d", &score);

	/*if (score > 90 && score <= 100)
	{
		grade = 'A';
	}

	if (score > 80 && score <= 90)
	{
		grade = 'B';
	}

	if (score > 70 && score <= 80)
	{
		grade = 'C';
	}

	if (score < 70)
	{
		grade = 'F';
	}*/

	if (score <= 100)
	{
		if (score > 90) {
			grade = 'A';
		}else if (score > 80){
			grade = 'B';
		}else if (score > 80) {
			grade = 'C';
		}else {
			grade = 'F';
		}

	}

	printf("%c", grade);
	return 0;
}