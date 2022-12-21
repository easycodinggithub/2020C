#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int func(int n) {
	static int a = 0;

	// static 이란 ? 지역 변수이지만 전역변수처럼 사용하는 것으로, 초기화가 한 번만 된다는 특징이 있다.

	// 다만 전역 변수와 달리 main 함수에서는 접근이 안된다. ( 함수 안에서만 사용가능 )

	a++;
	printf("a=%d, n=%d\n", a, n);
	return 0;
}
int main() {
	func(5);
	func(5);
}