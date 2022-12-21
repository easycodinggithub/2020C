#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n1 = 3;
	//3에 8을 곱하고, 4로 나는 결과
	//n1=(3*8)/4
	n1 = n1 << 3;
	n1 = n1 >> 2;
	printf("%d", n1);//6
	return 0;
}