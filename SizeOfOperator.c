#include <stdio.h>
int main1() {

	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;

	printf("���� ch �� ũ�� : %d \n", sizeof(ch));
	printf("���� 9 �� ũ�� : %d \n", sizeof(9));

	int n = 9;

	printf("���� n �� ũ�� : %d \n", sizeof(n));
	printf("���� 9 �� ũ�� : %d \n", sizeof(9));

	double d = 9.1234;

	printf("���� d �� ũ�� : %d \n", sizeof(d));
	printf("���� 9.1234 �� ũ�� : %d \n", sizeof(9.1234));



	printf("���� inum �� ũ�� : %d \n", sizeof(inum));
	printf("���� dnum �� ũ�� : %d \n", sizeof(dnum));

	printf("char �� ũ�� : %d \n", sizeof(char));


		return 0;
}