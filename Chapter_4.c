#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {

	char str[3][10] = { "Kim", "Hong", "Lee" }; // 2차원 배열
	//char* pStr[3] = { "Kim", "Hong", "Lee" };
	char* pStr[3] = { str[0], str[1], str[2] };

	printf("%s \n", str[0]);
	printf("%s \n", str[1]);
	printf("%s \n", str[2]);

	printf("%s \n", *pStr);
	printf("%s \n", *(pStr+1));
	printf("%s \n", *(pStr+2));

	/*printf("%d \n", pStr);
	printf("%d \n", (pStr + 1));
	printf("%d \n", (pStr + 2));*/

	return 0;
}