#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	//	포인터 ( POINTER ) 란 무엇인가 ?
	//	주소값을 저장을 목적으로 선언되는 포인터 변수
	//	변수가 선언되고, 값이 할당되면 메모리 공간에 저장되는데,
	//	메모리 공간의 위치인 주소값을 통해 접근을 할 수 있다.
	//	주소값을 저장하기 위한 변수가 포인터 변수이다.

	//	즉 포인터란 주소를 저장하는 변수

	//	포인터는 연산이 가능하다. 포인터 연산

	int* p;	//	(= int  *p)
	int a = 100;
	
	printf("%d \n", a);

	p = &a; //	&a는 a의 주소

	printf("%p \n", &a); //	%p 는 pointer 의 약자로 주소를 나타낸다.

	printf("%d \n", a); //	a의 값
	printf("%d %p \n", *p, p); // a의 값

	*p = 300;
	printf("%d \n", a);
	return 0;
}