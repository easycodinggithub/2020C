#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	
	int arr[3] = { 0, 1, 2 };
	printf("%d %d %d\n", arr[0], arr[1], arr[2]);
	int* ptr;
	ptr = arr;
	// 포인터란 무엇인가?
	// 주소 값 ( ADRESS ) 을 저장하는 변수

	printf("%d %d %d\n", ptr[0], ptr[1], ptr[2]);
	printf("%d %d %d\n", *ptr, *(ptr+1), *(ptr+2));

	// arr[0] = ptr[0] = *ptr 모두 같다
	// arr[1] = ptr[1] = *(ptr+1) 모두 같다
	// arr[2] = ptr[2] = *(ptr+2) 모두 같다

	return 0;
}