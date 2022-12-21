#include <stdio.h>
int main1() {

	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;

	printf("변수 ch 의 크기 : %d \n", sizeof(ch));
	printf("숫자 9 의 크기 : %d \n", sizeof(9));

	int n = 9;

	printf("변수 n 의 크기 : %d \n", sizeof(n));
	printf("숫자 9 의 크기 : %d \n", sizeof(9));

	double d = 9.1234;

	printf("변수 d 의 크기 : %d \n", sizeof(d));
	printf("숫자 9.1234 의 크기 : %d \n", sizeof(9.1234));



	printf("변수 inum 의 크기 : %d \n", sizeof(inum));
	printf("변수 dnum 의 크기 : %d \n", sizeof(dnum));

	printf("char 의 크기 : %d \n", sizeof(char));


		return 0;
}