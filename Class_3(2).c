#include <stdio.h>
int main() {
	
	int S_1, S_2, S_3;

	double avg = 0;

	scanf_s("%d %d %d", &S_1, &S_2, &S_3);

	avg = (S_1 + S_2 + S_3) / 3.0;

	if (avg >= 90) {
		printf("A");
	}else if (avg >= 80) {
		printf("B");
	}else if (avg >= 70) {
		printf("C");
	}else if (avg >= 60) {
		printf("D");
	}else{
		printf("F");
	}

}