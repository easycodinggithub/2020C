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
	printf("�̸� �Է� : ");
	scanf("%s", me.name);

	printf("���� �Է� : ");
	scanf("%d", me.age);

	printf("�й� �Է� : ");
	scanf("%d", me.age);

	printf("�� �̸��� : %s, ���̴� %d, �й��� : %d �Դϴ�.", me.name, me.age);
	return 0;
}