#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	int n1 = 100; 
	int* p;
	p = &n1; // 주소와 주소 저장
	printf("주소(Address) : %p, %p \n", p, &n1);
	printf("내용, 값 : %d, %d \n", *p, n1);
	for (int i = 0; i < 5; i++)
	{
		printf("%4d", (*p)++);

		// *p++ VS (*p)++
		// *p++ 은 p++ 후 *를 붙임
		// (*p)++ 는 *p 후 ++ 를 함

		printf("%d \n", n1);
	}

	return 0;
}