#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char str[] = "Hello World\n";
	printf("str=%s", str);
	printf("str�� ũ�� : %d\n", sizeof(str));

	// str ũ�Ⱑ 13�� ���� : str �� ���� ���� + ������ null ���� ( \0 )

	printf("%d\n", sizeof("Hello"));
	char str1[10];
	str1[0] = 'a';
	str1[1] = 'b';
	str1[2] = 'c';
	str1[3] = '\0';
	str1[4] = 'd';
	str1[5] = 'e';

	printf("str1 = %s\n", str1);

	return 0;
}