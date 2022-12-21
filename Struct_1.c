#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
typedef struct Books BB;
struct Books {
	char name[30]; // 이름
	char auth[30]; // 저작자
	char publ[30]; // 출판사
	int borrowed; // 대여 여부
	int amount; // 구입한 수량
};
int main() {
	// struct Books book_list[3]; // 목록 선언
	BB book_list[3]; // 목록 선언
	for (int i = 0; i < 3; i++)
	{
		printf("책 %d 정보 입력 : ", i);
		scanf("%s%s%s", book_list[i].name, book_list[i].auth, book_list[i].publ);
		book_list[i].borrowed = 0;
	}
	for (int i = 0; i < 3; i++)
	{
		printf("==================================== \n");
		printf("책 %s 의 정보\n", book_list[i].name);
		printf("저자 : %s \n", book_list[i].auth);
		printf("출판사 : %s \n", book_list[i].publ);

		if (book_list[i].borrowed == 0)
		{
			printf("안 빌려짐 \n");
		}
		else {
			printf("빌려짐 \n");
		}
	}

	return 0;
}