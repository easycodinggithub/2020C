#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct data Student;

//typedet struct data {
//	char name[20];
//	int age;
//}Student;

struct data {
	char name[20];
	int age;
	int old;
};

int main() {
	Student me;
	printf("이름 입력 : ");
	scanf("%s", me.name);

	printf("나이 입력 : ");
	scanf("%d", me.age);

	printf("학번 입력 : ");
	scanf("%d", me.age);

	printf("제 이름은 : %s, 나이는 %d, 학번은 : %d 입니다.", me.name, me.age);
	return 0;
}